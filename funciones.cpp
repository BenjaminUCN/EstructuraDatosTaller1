#include <array>
#include <vector>
#include <iostream>
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "NodeList.h"

using namespace std;
Estudent* e_aux = NULL;

Estudent* b_est(string nombre, NodeList<Estudent>* estudiantes)
{
    for(int i = 0; i < estudiantes->size; i++)
    {
        if(estudiantes->get(i)->getName() == nombre)
        {
            estudiantes->get(i)->mostrar();
            return estudiantes->get(i);
        }
    }
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
                e_aux = b_est(nombre, estudiantes);
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

            //
            break;
    }

}
