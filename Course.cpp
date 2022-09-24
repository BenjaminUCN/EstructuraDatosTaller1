#include"Course.h"
using namespace std;

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