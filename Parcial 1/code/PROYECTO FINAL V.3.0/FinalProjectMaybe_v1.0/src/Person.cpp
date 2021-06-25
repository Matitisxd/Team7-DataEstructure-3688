/***********************************************************************
 * Module:  Person.cpp
 * Author:  pzeadrian
 * Modified: martes, 22 de junio de 2021 23:53:11
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"


long Person::getId(void)
{
   return id;
}

void Person::setId(long newId)
{
   id = newId;
}

string Person::getName(void)
{
   return name;
}

void Person::setName(string newName)
{
   name = newName;
}

string Person::getLastName(void)
{
   return lastName;
}

void Person::setLastName(string newLastName)
{
   lastName = newLastName;
}

long Person::getBornDate(void)
{
   return bornDate;
}

void Person::setBornDate(long newBornDate)
{
   bornDate = newBornDate;
}

string Person::getEmail(void)
{
   return email;
}

void Person::setEmail(string newEmail)
{
   email = newEmail;
}

long Person::getPhoneNumber(void)
{
   return phoneNumber;
}

void Person::setPhoneNumber(long newPhoneNumber)
{
   phoneNumber = newPhoneNumber;
}

Person* Person::getNext(void)
{
   return next;
}

void Person::setNext(Person* newNext)
{
   next = newNext;
}

Person::Person(long _id, string _name, string _lastName, long _bornDate, string _email, long _phoneNumber)
{
   this->id = _id;
   this->name = _name;
   this->lastName = _lastName;
   this->bornDate = _bornDate;
   this->email = _email;
   this->phoneNumber = _phoneNumber;
   this->next = nullptr;
}

Person::~Person()
{
   // TODO : implement
}