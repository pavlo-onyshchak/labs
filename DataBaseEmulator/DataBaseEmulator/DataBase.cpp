#include "DataBase.h"

static const string DataBaseFile = ".\\DataBase\\it_companies.dat";
static const string TmpDataBaseFile = ".\\DataBase\\it_companies_tmpu.dat";

ostream& operator<<(ostream& out, const DataBase&)
{
	return out;
}

DataBase::DataBase()
{
}

bool DataBase::find(const string& id, ItCompany& company) const
{
	return false;
}

bool DataBase::find(const vector<string>& ids, vector<ItCompany>& companies) const
{
	return false;
}

bool DataBase::remove(const string& id)
{
	return false;
}

bool DataBase::remove(const vector<string>& ids)
{
	return false;
}

bool DataBase::insert(const string& id)
{
	return false;
}

bool DataBase::insert(const vector<string>& ids)
{
	return false;
}

bool DataBase::update(const string& id, const ItCompany&)
{
	return false;
}

bool DataBase::update(const vector<string>& ids, const vector<ItCompany>&)
{
	return false;
}
