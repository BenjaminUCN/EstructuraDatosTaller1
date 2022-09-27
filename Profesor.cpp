#include"Profesor.h"
using namespace std;

Profesor::Profesor()
{
};

void Profesor::setName(std::string nombre)
{
    name = nombre;
}

void Profesor::setSurname(std::string apellido)
{
    surname = apellido;
}

string Profesor::getName()
{
    return name;
}

string Profesor::getSurname()
{
    return surname;
}

void Profesor::mostrar()
{
    cout<<  "Profesor "<< name << " " << surname << endl;
    cout<<  "Ramos que dicta:   \n";

}

void Profesor::mostrarRamos()
{
    for (int i = 0; i < courses.size; i++)
    {
        cout<<i+1<<". "<<(*courses[i])->getName()<<endl;
    }
    
};

Course* Profesor::getCourse(int index){
    return *courses[index];
};

void Profesor::addCourse(Course* course)
{
    bool exist;
    for (int i = 0; i < courses.size; i++)
    {
        if(*courses[i] == course)
        {
            exist = true;
        }
    }

    if(!exist && courses.size < 3)
    {
        courses.add(course);
    }
};

void Profesor::removeCourse(int index){
    courses.remove(index);
};

int Profesor::getCoursesSize()
{
    return courses.size;
};