#include <iostream>
#include "Person.h"

class Book
{
    public:
        bool emptyBook();
        void addNewPerson(long, string, string, long, string, long);
        string generateEmail(long, string, string);
        void deletePerson(long, string, string, long, string, long);
        void modifyPerson(long, string, string, long, string, long);
        Book();
        ~Book();

    private:
        Person* first;
        Person* current;
};