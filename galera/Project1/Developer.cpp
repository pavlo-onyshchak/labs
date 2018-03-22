#include"Developer.h"
#include<iostream>;

using namespace std;

void Developer::setLanguage(language  language)
{
    switch (language)
    {
    case language :: C:
    {
       _language = Developer::language::C;
        break;
    }
    case language :: CPlusPlus:
    {
        _language = Developer::language::CPlusPlus;
        break;
    }
    case language :: CSharp:
    {
       _language = Developer::language::CSharp;
        break;
    }
    case language :: Java:
    {
        _language = Developer::language::Java;
        break;
    }
    case language :: Python:
    {
        _language = Developer::language::Python;
        break;
    }

    }
}

Developer::language Developer::getLanguage() const
{
    return _language;
}

