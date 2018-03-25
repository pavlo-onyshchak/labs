#include "DataBase.h"

ostream & operator<<(ostream & out, const DataBase &)
{
	// TODO: insert return statement here
}

ItCompany DataBase::find(const string & id) const
{
	return ItCompany();
}

vector<ItCompany> DataBase::find(const vector<string>& ids) const
{
	return vector<ItCompany>();
}

bool DataBase::remove(const string & id)
{
	return false;
}

bool DataBase::remove(const vector<string>& ids)
{
	return false;
}

bool DataBase::insert(const string & id)
{
	return false;
}

bool DataBase::insert(const vector<string>& ids)
{
	return false;
}

bool DataBase::update(const string & id, const ItCompany &)
{
	return false;
}

bool DataBase::update(const vector<string>& ids, const vector<ItCompany>&)
{
	return false;
}
