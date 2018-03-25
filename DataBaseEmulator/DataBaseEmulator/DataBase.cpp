#include "DataBase.h"

static const string DataBaseFile = ".\\DataBase\\it_companies.dat";
static const string TmpDataBaseFile = ".\\DataBase\\it_companies_tmp.dat";

ostream& operator<<(ostream& out, const DataBase&)
{
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

bool DataBase::update(const string& id, const ItCompany& company)
{
	vector<string> idCollection = { id };
	vector<ItCompany> companiesToUpdate = { company };
	return update(idCollection, companiesToUpdate);
}

bool DataBase::update(const vector<string>& idCollection, const vector<ItCompany>& companies)
{
	return false;
}

vector<ItCompany> DataBase::read(ifstream& in)
{
	return vector<ItCompany>();
}

void DataBase::write(ofstream& out)
{

}
