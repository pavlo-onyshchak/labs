#include "DataBase.h"
#include <fstream>

static const string DataBaseFile = ".\\DataBase\\it_companies.dat";
static const string TmpDataBaseFile = ".\\DataBase\\it_companies_tmp.dat";

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
	return false;
}

bool DataBase::insert(const string& id)
{
	vector<string> idCollection = { id };
	return insert(idCollection);
}

bool DataBase::insert(const vector<string>& idCollection)
{
	return false;
}

bool DataBase::updateRecord(const string& id, const ItCompany& company)
{
	vector<string> idCollection = { id };
	vector<ItCompany> companiesToUpdate = { company };
	return updateRecord(idCollection, companiesToUpdate);
}

bool DataBase::updateRecord(const vector<string>& idCollection, const vector<ItCompany>& newCompanyCollection)
{
	ifstream in(DataBaseFile);
	auto companyCollection = read(in);

	for (int i = 0; i < idCollection.size(); ++i)
	{
		auto it = std::find(companyCollection.begin(), 
							companyCollection.end(), 
							[&](ItCompany c) { return idCollection[i] == c.getId(); });

		if (it != companyCollection.end())
		{
			updateRecord(*it, newCompanyCollection[i]);
		}
		else
		{
			return false;
		}
	}

	ofstream out(DataBaseFile);
	write(out, companyCollection);
	return true;
}

vector<ItCompany> DataBase::read(ifstream& in)
{
	return vector<ItCompany>();
}

void DataBase::write(ofstream& out, const vector<ItCompany>& companyCollection)
{

}

void DataBase::updateRecord(ItCompany& dest, const ItCompany& source)
{
	dest.setName(source.getName());
	dest.setEmployeeCount(source.getEmployeeCount);
	dest.setOfficeCount(source.setOfficeCount);
}
