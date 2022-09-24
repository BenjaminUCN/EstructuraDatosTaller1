#include"Estudent.h"
using namespace std;

Estudent::Estudent()
{
};

int Estudent::getSemester()
{
    return semester;
};

int Estudent::getAge()
{
    return age;
};

string Estudent::getName()
{
    return name;
};

string Estudent::getSurname()
{
    return surname;
};

void Estudent::setSemester(int _semester)
{
    semester = _semester;
};

void Estudent::setAge(int _age)
{
    age = _age;
};

void Estudent::setName(string _name)
{
    name = _name;
};

void Estudent::setSurname(string _surname)
{
    surname = _surname;
};