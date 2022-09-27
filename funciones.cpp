#include <array>
#include <vector>
#include <iostream>
#include <string>
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "NodeList.h"
#include "funciones.h"

using namespace std;
Estudent* e_aux = NULL;
Profesor* p_aux = NULL;
Course* c_aux = NULL;
string nombre, apellido, sala, carrera;
int res, edad, semestre;

void updateEstudent(Estudent* e);
void modifyEstudent(NodeList<Estudent>* estudiantes);

Estudent* b_est(string name, string surname, NodeList<Estudent>* estudiantes)
{
    for(int i = 0; i < estudiantes->size; i++)
    {
        if(estudiantes->get(i)->getName() == name && estudiantes->get(i)->getSurname() == surname)
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
                {string surname;
                cout << "ingrese nombre del Estudiante" << endl;
                cout << ">";cin >> nombre;
                cout << "ingrese apellido del Estudiante" << endl;
                cout << ">";cin >> surname;
                e_aux = new Estudent();
                e_aux = b_est(nombre, surname, estudiantes);
                if(e_aux != NULL)
                {
                    e_aux->mostrar();
                    break;
                }
                cout << "El estudiante no existe    \n";}
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

                {string surname;
                cout << "Ingrese nombre del estudiante" << endl;
                cout << ">";
                cin >> nombre;
                cout << "ingrese apellido del Estudiante" << endl;
                cout << ">";cin >> surname;

                e_aux = b_est(nombre, surname, estudiantes);
                if(e_aux != NULL)
                {
                    cout<<  "El Alumno ya esta inscrito, volviendo al menú agregar \n";
                    break;
                }

                cout << "Ingrese edad del estudiante    \n";
                cout << ">";
                cin >> edad;

                e_aux = new Estudent();
                e_aux->setName(nombre);
                e_aux->setSurname(surname);
                e_aux->setAge(edad);
                estudiantes->add(*e_aux);}
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

void modificarRamo(NodeList<Course>* cursos, Course* c_aux)
{
    {
        int resp;
        cout<<"que informacion desea cambiar? \n";
        cout<<"1. Modificar nombre del ramo\n";
        cout<<"2. Modificar carrera del ramo\n";
        cout<<"3. Modificar sala del ramo\n";
        cout<<">"; cin>>resp;
        switch (resp) {
            case 1:
            {
                cout << "Ingrese el nuevo nombre para el ramo" << endl;
                string newName;cout << ">";cin >> newName;int valor;
                if (newName != c_aux->getName()) {
                    for (int i = 0; i < cursos->size; i++) {
                        if (cursos->get(i)->getName() == newName) {
                            cout << "nombre ya registrado";
                            valor = -1;
                        }
                        if (cursos->get(i)->getName() == c_aux->getName()) { valor = i; }
                    }
                    if (valor > -1) { cursos->get(valor)->setName(newName); }
                }
                break;
            }
            case 2:
            {
                cout << "Ingrese el nombre de la carrera" << endl;
                string newName;cout << ">";cin >> newName;int valor;
                if (newName != c_aux->getCareer()) {
                    for (int i = 0; i < cursos->size; i++) {
                        if (cursos->get(i)->getName() == c_aux->getName())
                        {
                            cursos->get(i)->setCareer(newName);
                        }
                    }
                }
                break;
            }
            case 3:
            {
                cout << "Ingrese la sala" << endl;
                string newName;cout << ">";cin >> newName;int valor;
                if (newName != c_aux->getClassroom()) {
                    for (int i = 0; i < cursos->size; i++) {
                        if (cursos->get(i)->getName() == c_aux->getName())
                        {
                            cursos->get(i)->setClassroom(newName);
                        }
                    }
                }
                break;
            }
            default:
                cout<<"intente nuevamente"<<endl;
        }
    }
}

void eliminarRamo(NodeList<Course>* cursos, Course* c_aux)
{
    for (int i = 0; i < cursos->size; i++) {
        if (cursos->get(i)== c_aux)
        {
            cursos->remove(i);
        }
    }
}

void modificarEstudiante(NodeList<Estudent>* estudiantes, Estudent* e_aux)
{
//copy paste de modificar ramo, supongo
}

void modificarProfesor(NodeList<Profesor>* profesores, Profesor* p_aux)
{
//copy paste también
}

void modificar(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{
    int opcion;
    do{
        cout<<"------------: MODIFICAR :------------"<<endl;
        cout<<  "Que tipo de dato desea modificar en el sistema?\n";
        cout<<"1. Modificar datos de un Ramo\n";
        cout<<"2. Modificar datos de un Profesor\n";
        cout<<"3. Modificar datos de un Alumno\n";
        cout<<"4. Eliminar datos de un Ramo\n";
        cout<<"5. Eliminar datos de un Profesor\n";
        cout<<"6. Eliminar datos de un Alumno\n";
        cout<<"7. Volver al menu  \n";
        cout<<">";cin>>opcion;
        string nombreR,nombreP,nombreE;

        switch (opcion) {
            case 1:
                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombreR;
                c_aux = b_cou(nombreR, cursos);
                if (c_aux == NULL) {
                    cout << "nothin' happened' " << endl;
                } else { modificarRamo(cursos, c_aux); }
                break;

            case 2:
                cout << "ingrese nombre del profesor" << endl;
                cout << ">";
                cin >> nombreP;
                p_aux = b_prof(nombreP, profesores);
                if (p_aux == NULL) {
                    cout << "nothin' happened' " << endl;
                } else { modificarProfesor(profesores, p_aux); } //tambien agregar cursos
                break;

            case 3:
                {string name, surname;
                cout<<"ingrese nombre del Estudiante:"<<endl;
                cout<<">";cin>> name;
                cout<<"ingrese apellido del Estudiante:"<<endl;
                cout<<">";cin>> surname;

                Estudent* e = b_est(name, surname, estudiantes);

                if(e!=NULL){
                    updateEstudent(e);
                }}
                break;

            case 4:
                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombreR;
                c_aux = b_cou(nombreR, cursos);
                if (c_aux == NULL) {
                    cout << "nothin' happened' " << endl;
                } else { eliminarRamo(cursos, c_aux); }
                cout<<"pasa aca";
                break;

            case 5:
                //
                break;

            case 6:
                {string name, surname;
                cout<<"ingrese nombre del Estudiante:"<<endl;
                cout<<">";cin>> name;
                cout<<"ingrese apellido del Estudiante:"<<endl;
                cout<<">";cin>> surname;

                Estudent* e = b_est(name, surname, estudiantes);

                if(e!=NULL){
                    for (int i = 0; i < estudiantes->size; i++)
                    {
                        if((*estudiantes)[i] == e){
                            estudiantes->remove(i);
                        }
                    }
                    
                }}
                break;

            default:
                if (opcion!=7){cout << "Ingrese una opcion valida  \n";}
        }
    }while(opcion!=7);


}


void modifyEstudent(NodeList<Estudent>* estudiantes)
{
    string name, surname;
    cout<<"ingrese nombre del Estudiante:"<<endl;
    cout<<">";cin>> name;
    cout<<"ingrese apellido del Estudiante:"<<endl;
    cout<<">";cin>> surname;

    Estudent* e = b_est(name, surname, estudiantes);

    if(e!=NULL)
    {
        int op;
        do{
            cout<<" ¿Que desea hacer?"<<endl;
            cout<<"1. Editar datos del estudiante"<<endl;
            cout<<"2. Eliminar el estudiante"<<endl;
            cout<<"3. Volver"<<endl;
            cout<<">";cin>> op;

            switch (op)
            {
                case 1:
                    updateEstudent(e);
                    break;
                case 2:
                    //delete estudent
                    break;
                default:
                    break;
            }
        }while (op != 3);

    }
}

void modifyEstudentCourses(Estudent* e)
{
    int op;
    do
    {
        cout<<" Que desea hacer?"<<endl;
        cout<<"1. Agregar un ramo"<<endl;
        cout<<"2. Eliminar un ramo"<<endl;
        cout<<"3. Volver"<<endl;
        cout<<">";cin>> op;

        switch (op)
        {
            case 1:
                /* code */
                break;
            case 2:
                e->mostrarRamos();
                int courseIndex;
                cout<<"Elija una opcion:"<<endl;
                cout<<">";cin>> courseIndex;
                e->removeCourse(courseIndex);
                break;
            default:
                break;
        }
    } while (op !=3);

}

void updateEstudent(Estudent* e){
    if(e!=NULL){
        int opcion;
        do{
            cout<<"------------: EDITAR DATOS :------------"<<endl;
            cout<<  "Que tipo de dato desea editar?\n";
            cout<<"1. Nombre\n";
            cout<<"2. Apellido\n";
            cout<<"3. Edad\n";
            cout<<"4. Semestre\n";
            cout<<"5. Ramos\n";
            cout<<"6. Volver\n";
            cout<<">";cin>>opcion;

            switch (opcion)
            {
                case 1:
                {string name;
                    cout<<"ingrese un nuevo nombre:"<<endl;
                    cout<<">";cin>> name;
                    e->setName(name);}
                    break;
                case 2:
                {string surname;
                    cout<<"ingrese un nuevo apellido:"<<endl;
                    cout<<">";cin>> surname;
                    e->setSurname(surname);}
                    break;
                case 3:
                {int age;
                    cout<<"ingrese nueva edad:"<<endl;
                    cout<<">";cin>> age;
                    e->setAge(age);}
                    break;
                case 4:
                {int semester;
                    cout<<"Semestre actual: "<<e->getSemester()<<endl;
                    cout<<"ingrese un nuevo semestre:"<<endl;
                    cout<<">";cin>> semester;
                    e->setSemester(semester);}
                    break;
                case 5:
                    //verificar que courses.size > 0
                    e->mostrarRamos();
                    modifyEstudentCourses(e);
                    break;
                default:
                    break;
            }

        }while(opcion !=6);
    }

};
