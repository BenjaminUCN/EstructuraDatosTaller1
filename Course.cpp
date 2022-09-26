#include"Course.h"
using namespace std;
#include <iostream>

Course::Course()
{
};

string Course::getName()
{
    return name;
};

string Course::getCareer()
{
    return career;
};

string Course::getClassroom()
{
    return classroom;
};

void Course::setName(string _name)
{
    name = _name;
};

void Course::setCareer(string _career)
{
    career = _career;
};

void Course::setClassroom(string _classroom)
{
    classroom = _classroom;
};

void Course::mostrar()
{
    cout<<  "Nombre del curso: " <<name <<endl;
    cout<<  "Carrera: " <<career <<endl;
    cout<<  "Sala: " <<classroom <<endl;
    cout<<endl;
}