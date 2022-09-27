#include"Estudent.h"
#include"Course.h"
using namespace std;


Estudent::Estudent()
{
};

Estudent::Estudent(string _name)
{
    name = _name;
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

void Estudent::mostrar()
{
    cout<<  "Nombre: "  <<  name    <<  endl;
    cout<<  "Apellido: "    <<  surname     <<  endl;
    cout<<  endl;
}

void Estudent::mostrarRamos()
{
    for (int i = 0; i < courses.size; i++)
    {
        cout<<i+1<<". "<<(*courses[i])->getName()<<endl;
    }
    
};

Course* Estudent::getCourse(int index){
    return *courses[index];
};

void Estudent::addCourse(Course* course)
{
    bool exist;
    for (int i = 0; i < courses.size; i++)
    {
        if(*courses[i] == course)
        {
            exist = true;
        }
    }

    if(!exist && courses.size <5)
    {
        courses.add(course);
    }
};

void Estudent::removeCourse(int index){
    courses.remove(index);
};

int Estudent::getCoursesSize()
{
    return courses.size;
};