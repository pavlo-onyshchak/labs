#include"Developer.h"
#include<iostream>;

using namespace std;


void Developer::setLanguage(language  language)
{
    switch (language)
    {
    case language::c:
    {
        string s = "c";
        _language = s;
        break;
    }
    case language::c_plusplus:
    {
        string s = "c++";
        _language = s;
        break;
    }
    case language::c_sharp:
    {
        string s = "c_sharp";
        _language = s;
        break;
    }
    case language::java:
    {
        string s = "java";
        _language = s;
        break;
    }
    case language::python:
    {
        string s = "python";
        _language = s;
        break;
    }

    }
}

string Developer::getLanguage() const
{
    return _language;
}
