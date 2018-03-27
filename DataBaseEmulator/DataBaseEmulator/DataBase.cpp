#include "DataBase.h"
#include <fstream>
#include <algorithm>

static const string DataBaseFile = ".\\DataBase\\it_companies.dat";
static const string TmpDataBaseFile = ".\\DataBase\\it_companies_tmp.dat";
static const ios_base::openmode OverwriteFileMode = ios::out | ios::trunc;

ostream& operator<<(ostream& out, const DataBase& db)
{
	ifstream in(DataBaseFile);
	auto companyCollection = db.read(in);
	for (auto company : companyCollection)
	{
	 	out << company << endl;
	}

	return out;
}

bool DataBase::find(const string& id, ItCompany& company) const
{
	vector<string> idCollection = { id };
	vector<ItCompany> foundCompanies;
	if (find(idCollection, foundCompanies))
	{
		company = foundCompanies.front();
		return true;
	}
	else
	{
		return false;
	}
}

bool DataBase::find(const vector<string>& idCollection, vector<ItCompany>& companies) const
{
	return false;
}

bool DataBase::remove(const string& id)
{
	vector<string> idCollection = { id };
	return remove(idCollection);
}

bool DataBase::remove(const vector<string>& idCollection)
{
    ifstream in(DataBaseFile);
    auto companyCollection = read(in);
    
    for (auto id : idCollection)
    {
        auto it = std::find_if(companyCollection.begin(),
                               companyCollection.end(),
                               [&](const ItCompany& c) { return id == c.getId(); });

        if (it != companyCollection.end())
        {
            companyCollection.erase(it);
        }
        else
        {
            return false;
        }
    }

    ofstream out(DataBaseFile, OverwriteFileMode);
    write(out, companyCollection);
    return true;
}

bool DataBase::insert(const ItCompany& company)
{
	vector<ItCompany> TmpCollection = {company};
	return insert(TmpCollection);
}

bool DataBase::insert(const vector<ItCompany>& TmpCollection)
{
    ifstream in(DataBaseFile);
    auto companyCollection = read(in);
    for (int i = 0; i < TmpCollection.size(); i++)
    {
        companyCollection.push_back(TmpCollection[i]);
    }

    ofstream out(DataBaseFile);
    write(out, companyCollection);
	return false;
}

bool DataBase::update(const string& id, const ItCompany& company)
{
	vector<string> idCollection = { id };
	vector<ItCompany> companiesToUpdate = { company };
	return update(idCollection, companiesToUpdate);
}

bool DataBase::update(const vector<string>& idCollection, const vector<ItCompany>& newCompanyCollection)
{
	ifstream in(DataBaseFile);
	auto companyCollection = read(in);

	for (size_t i = 0; i < idCollection.size(); ++i)
	{
		auto it = std::find_if(companyCollection.begin(),
								companyCollection.end(),
								[&](const ItCompany& c) { return idCollection[i] == c.getId(); });

		if (it != companyCollection.end())
		{
			updateRecord(*it, newCompanyCollection[i]);
		}
		else
		{
			return false;
		}
	}

	ofstream out(DataBaseFile, OverwriteFileMode);
	write(out, companyCollection);
	return true;
}

vector<ItCompany> DataBase::read(ifstream& in)
{
	vector<ItCompany> companyCollection;
	ItCompany company;
	while (in >> company)
	{
		companyCollection.push_back(company);
	}

	return companyCollection;
}

void DataBase::write(ofstream& out, const vector<ItCompany>& companyCollection)
{
	for (auto company : companyCollection)
	{
		out << company << endl;
	}
}

void DataBase::updateRecord(ItCompany& dest, const ItCompany& source)
{
	dest.setName(source.getName());
	dest.setEmployeeCount(source.getEmployeeCount());
	dest.setOfficeCount(source.getOfficeCount());
}
