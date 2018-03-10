#include"Developer.h"
#include<iostream>;

using namespace std;

void Developer::setLanguage(string language)
{
    _language = language;
}

string Developer::getLanguage() const
{
    return _language;
}
