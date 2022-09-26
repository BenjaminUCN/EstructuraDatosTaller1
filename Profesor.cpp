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

