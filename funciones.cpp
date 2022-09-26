#include <array>
#include <vector>
#include <iostream>
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "NodeList.h"

using namespace std;
Estudent* e_aux = NULL;
Profesor* p_aux = NULL;
Course* c_aux = NULL;
string nombre, apellido, sala, carrera;
int res, edad, semestre;

Estudent* b_est(string nombre, NodeList<Estudent>* estudiantes)
{
    for(int i = 0; i < estudiantes->size; i++)
    {
        if(estudiantes->get(i)->getName() == nombre)
        {

            return estudiantes->get(i);
        }
    }
    return NULL;
}

Course* b_cou(string nombre, NodeList<Course>* cursos)
{
    for(int i = 0; i < cursos->size; i++)
    {
        if(cursos->get(i)->getName() == nombre)
        {

            return cursos->get(i);
        }
    }
    return NULL;
}

Profesor* b_prof(string nombre, NodeList<Profesor>* profesores)
{
    for(int i = 0; i < profesores->size; i++)
    {
        if(profesores->get(i)->getName() == nombre)
        {

            return profesores->get(i);
        }
    }
    return NULL;
}

void consulta(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{

    bool condicion = true;

    do {
        cout << "------------: CONSULTA :------------" << endl;
        cout << "Que tipo de consulta desea hacer?\n";
        cout << "1. Consultar por un ramo\n";
        cout << "2. Consultar por un profesor\n";
        cout << "3. Consultar por un alumno\n";
        cout << "4. Volver al menu" << endl;
        cout << ">";
        cin >> res;


        switch (res) {
            case 1:
                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombre;
                c_aux = new Course();
                c_aux = b_cou(nombre, cursos);
                if(c_aux != NULL)
                {
                    c_aux->mostrar();
                    break;
                }
                cout << "El curso no existe    \n";
                break;

            case 2:
                cout << "ingrese nombre del profesor" << endl;
                cout << ">";
                cin >> nombre;
                p_aux = new Profesor();
                p_aux = b_prof(nombre, profesores);
                if(p_aux != NULL)
                {
                    p_aux->mostrar();
                    break;
                }
                cout << "El profesor no existe    \n";
                break;

            case 3:
                cout << "ingrese nombre del Estudiante" << endl;
                cout << ">";
                cin >> nombre;
                e_aux = new Estudent();
                e_aux = b_est(nombre, estudiantes);
                if(e_aux != NULL)
                {
                    e_aux->mostrar();
                    break;
                }
                cout << "El estudiante no existe    \n";
                break;

            case 4:
                condicion = false;
                cout<<endl;

                break;

            default:
                cout<<  "Ingrese una opción válida  \n";
        }
    }while(condicion);

}

void agregar(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{
    bool condicion = true;
    do {
        cout << "Posicion de estudiantes: " << estudiantes << endl;
        cout << "------------: AGREGAR :------------" << endl;
        cout << "Que tipo de dato desea agregar al sistema?\n";
        cout << "1. Agregar un ramo\n";
        cout << "2. Agregar un Profesor\n";
        cout << "3. Agregar un alumno\n";
        cout << "4. Volver al menu  \n";
        int res;
        cout << ">";
        cin >> res;
        string nombre;
        switch (res) {
            case 1:

                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombre;

                c_aux = b_cou(nombre, cursos);
                if(c_aux != NULL)
                {
                    cout<<  "El curso ya esta inscrito, volviendo al menú agregar \n";
                    break;
                }

                cout << "ingrese la carrera del ramo" << endl;
                cout << ">";
                cin >> carrera;

                cout << "ingrese la sala del ramo" << endl;
                cout << ">";
                cin >> sala;

                c_aux = new Course();
                c_aux->setName(nombre);
                c_aux->setCareer(carrera);
                c_aux->setClassroom(sala);
                cursos->add(*c_aux);
                break;

            case 2:

                cout << "ingrese nombre del profesor" << endl;
                cout << ">";
                cin >> nombre;

                p_aux = b_prof(nombre, profesores);
                if(p_aux != NULL)
                {
                    cout<<  "El profesor ya esta inscrito, volviendo al menú agregar \n";
                    break;
                }

                cout << "ingrese apellido del profesor" << endl;
                cout << ">";
                cin >> apellido;

                p_aux = new Profesor();
                p_aux->setName(nombre);
                p_aux->setSurname(apellido);
                profesores->add(*p_aux);
                break;

            case 3:

                cout << "Ingrese nombre del estudiante" << endl;
                cout << ">";
                cin >> nombre;

                e_aux = b_est(nombre, estudiantes);
                if(e_aux != NULL)
                {
                    cout<<  "El Alumno ya esta inscrito, volviendo al menú agregar \n";
                    break;
                }

                cout << "Ingrese apellido del estudiante    \n";
                cout << ">";
                cin >> apellido;

                cout << "Ingrese edad del estudiante    \n";
                cout << ">";
                cin >> edad;

                e_aux = new Estudent();
                e_aux->setName(nombre);
                e_aux->setSurname(apellido);
                e_aux->setAge(edad);
                estudiantes->add(*e_aux);
                break;

            case 4:
                condicion = false;
                cout<<endl;
                break;

            default:
                cout<<  "Ingrese una opción válida  \n";
        }
    } while(condicion);

}
void modificar(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{
    bool condicion = true;
    do{
        cout<<"------------: MODIFICAR :------------"<<endl;
        cout<<  "Que tipo de dato desea modificar en el sistema?\n";
        cout<<"1. Modificar datos de un ramo\n";
        cout<<"2. Modificar datos de un Profesor\n";
        cout<<"3. Modificar datos de un alumno\n";
        cout<<  "4. Volver al menu  \n";
        int res;
        cout<<">";cin>>res;
        string nombreR;string nombreP;string nombreE;

        switch (res) {
            case 1:
                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombreR;
                //
                break;

            case 2:
                cout << "ingrese nombre del profesor" << endl;
                cout << ">";
                cin >> nombreP;
                //
                break;

            case 3:
                cout << "ingrese nombre del Estudiante" << endl;
                cout << ">";
                cin >> nombreE;
                break;

            case 4:
                condicion = false;
                cout << endl;
                break;

            default:
                cout << "Ingrese una opción válida  \n";
        }
    }while(condicion);


}