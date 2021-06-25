#include <iostream>
#include "Book.h"
#include "Extra.h"
#include <stdio.h>
#include <conio.h>

using namespace std;

Book::Book()
{
    this->first = nullptr;
    this->current = nullptr;
}

bool Book::emptyBook()
{
    return (this->first == nullptr);
}

void Book::addNewPerson(long _id, string _name, string _lastName, long _bornDate, string _email, long _phoneNumber)
{

    Person* newPerson = new Person(_id, _name, _lastName, _bornDate, _email, _phoneNumber);
    if(emptyBook())
    {
        this->first = newPerson;
    }
    else
    {
        this->current->next = newPerson;
    }
    this->current = newPerson;

}

string Book::generateEmail(long _id, string _name, string _lastName)
{
    string firstLetter, secondLetter, thirdPart, username, email;
    string emailEnd = "@espe.fin.ec";
    int j = 0;
    Extra extras;
    for(int i = 0; i < _name.length() - 1; i++)
    {
        firstLetter = _name[0];
        if(_name[i] == ' ')
        {
            secondLetter = _name[i + 1];
        }
    }

    do{
        thirdPart += _lastName[j];
        j++;
    }while (_lastName[j] != ' ');

    username = firstLetter + secondLetter + thirdPart;
    username = extras.getLowercase(username);
    email = username + emailEnd;

    return email;

    //TODO check the id and add the number to the username
}

void Book::modifyPerson(long _id, string _name, string _lastName, long _bornDate, string _email, long _phoneNumber)
{

}

void Book::deletePerson(long _id, string _name, string _lastName, long _bornDate, string _email, long _phoneNumber)
{

}

Book::~Book()
{
    //TODO: implement
}