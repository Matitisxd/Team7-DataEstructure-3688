/***********************************************************************
 * Module:  Person.h
 * Author:  pzeadrian
 * Modified: martes, 22 de junio de 2021 23:53:11
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

class Person
{
    public:
        long getId(void);
        void setId(long newId);
        string getName(void);
        void setName(string newName);
        string getLastName(void);
        void setLastName(string newLastName);
        long getBornDate(void);
        void setBornDate(long newBornDate);
        string getEmail(void);
        void setEmail(string newEmail);
        long  getPhoneNumber(void);
        void setPhoneNumber(long  newPhoneNumber);
        Person* getNext(void);
        void setNext(Person* newNext);
        Person(long, string, string, long, string, long);
        ~Person();

    private:
        long id;
        string name;
        string lastName;
        long bornDate;
        string email;
        long phoneNumber;
        Person* next;

    friend class Book;

};