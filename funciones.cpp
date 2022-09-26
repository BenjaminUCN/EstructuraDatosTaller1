#include <array>
#include <vector>
#include <iostream>
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "NodeList.h"
#include "funciones.h"

using namespace std;
Estudent* e_aux = NULL;

Estudent* b_est(string name, string surname, NodeList<Estudent>* estudiantes)
{
    for(int i = 0; i < estudiantes->size; i++)
    {
        if(estudiantes->get(i)->getName() == name && estudiantes->get(i)->getSurname() == surname)
        {
            estudiantes->get(i)->mostrar();
            return estudiantes->get(i);
        }
    }
    cout<<"\nEstudiante no encontrado.";
    return NULL;
}

void consulta(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{

    bool nose = true;


    do {
        cout << "------------: CONSULTA :------------" << endl;
        cout << "Que tipo de consulta desea hacer?\n";
        cout << "1. Consultar por un ramo\n";
        cout << "2. Consultar por un profesor\n";
        cout << "3. Consultar por un alumno\n";
        cout << "4. Volver al menu" << endl;
        int res;
        cout << ">";
        cin >> res;
        string nombre;

        switch (res) {
            case 1:
                cout << "ingrese nombre del ramo" << endl;
                cout << ">";
                cin >> nombre;
                //
                break;

            case 2:
                cout << "ingrese nombre del profesor" << endl;
                cout << ">";
                cin >> nombre;
                //
                break;

            case 3:
                cout << "ingrese nombre del Estudiante" << endl;
                cout << ">";
                cin >> nombre;
                e_aux = new Estudent();
                e_aux = b_est(nombre,"", estudiantes);
                e_aux->mostrar();
                break;

            case 4:
                nose = false;
                cout<<endl;
                break;

            default:
                cout<<  "Ingrese una opción válida  \n";
        }
    }while(nose);

}

void agregar(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{
    cout<<"Posicion de estudiantes: " <<estudiantes<<endl;
    cout<<"------------: AGREGAR :------------"<<endl;
    cout<<  "Que tipo de dato desea agregar al sistema?\n";
    cout<<"1. Agregar un ramo\n";
    cout<<"2. Agregar un Profesor\n";
    cout<<"3. Agregar un alumno\n";
    cout<<"presione cualquier otro numero para salir"<<endl;
    int res;
    cout<<">";cin>>res;
    string nombreR;string nombreP;string nombreE;
    switch (res)
    {
        case 1:
            cout<<"ingrese nombre del ramo"<<endl;
            cout<<">";cin>> nombreR;
            //
            break;

        case 2:
            cout<<"ingrese nombre del profesor"<<endl;
            cout<<">";cin>> nombreP;
            //
            break;

        case 3:
            cout<<"ingrese nombre del Estudiante"<<endl;
            cout<<">";cin>> nombreE;
            e_aux = new Estudent();
            e_aux->setName(nombreE);
            estudiantes->add(*e_aux);
            break;
    }

}
void modificar(NodeList<Estudent>* estudiantes, NodeList<Profesor>* profesores, NodeList<Course>* cursos)
{
    cout<<"------------: MODIFICAR :------------"<<endl;
    cout<<  "Que tipo de dato desea modificar en el sistema?\n";
    cout<<"1. Modificar datos de un ramo\n";
    cout<<"2. Modificar datos de un Profesor\n";
    cout<<"3. Modificar datos de un alumno\n";
    int opcion;
    cout<<">";cin>>opcion;
    string nombreR,nombreP,nombreE;
    switch (opcion)
    {
        case 1:
            cout<<"ingrese nombre del ramo"<<endl;
            cout<<">";cin>> nombreR;
            //
            break;

        case 2:
            cout<<"ingrese nombre del profesor"<<endl;
            cout<<">";cin>> nombreP;
            //
            break;

        case 3:
            updateEstudent(estudiantes);
            break;
    }

}


void modifyEstudent(NodeList<Estudent>* estudiantes)
{

}

void updateEstudent(NodeList<Estudent>* estudiantes){
    string name, surname;
    cout<<"ingrese nombre del Estudiante:"<<endl;
    cout<<">";cin>> name;
    cout<<"ingrese apellido del Estudiante:"<<endl;
    cout<<">";cin>> surname;

    Estudent* e = b_est(name, surname, estudiantes);

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
                cout<<"ingrese un nuevo nombre:"<<endl;
                cout<<">";cin>> name;
                e->setName(name);
                break;
            case 2:
                cout<<"ingrese un nuevo apellido:"<<endl;
                cout<<">";cin>> surname;
                e->setSurname(surname);
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
                {
                //mostrar ramos
                //
                string courseName;
                cout<<"ingrese el nombre del ramo:"<<endl;
                cout<<">";cin>> courseName;
                //
                }
                break;
            default:
                break;
            }
        
        }while(opcion !=6);
    }


};