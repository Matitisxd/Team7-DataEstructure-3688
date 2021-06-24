#include <iostream>
#include "Extra.h"
#include <string.h>
#include <algorithm>

using namespace std;

string Extra::getLowercase(string word)
{
    for_each(word.begin(), word.end(), [](char &c)
    {
        c = tolower(c);
    });

    return word;
}