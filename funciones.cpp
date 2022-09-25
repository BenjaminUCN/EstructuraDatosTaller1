#include <array>
#include <vector>
#include <iostream>
#include "Estudent.h"
#include "Course.h"
#include "NodeList.h"

using namespace std;
Estudent* b_est(string nombre, NodeList<Estudent> estudiantes)
{
    for(int i = 0; i < estudiantes.size; i++)
    {
        if(estudiantes.get(i)->getName() == nombre)
            estudiantes.get(i)->mostrar();
    }
}

void consulta(NodeList<Estudent> estudiantes)
{
    cout<<"------------: CONSULTA :------------"<<endl;
    cout<<  "Que tipo de consulta desea hacer?\n";
    cout<<  "1. Consultar por un ramo\n";
    cout<<  "2. Consultar por un profesor\n";
    cout<<  "3. Consultar por un alumno\n";
    cout<<  "presione cualquier otro numero para salir"<<endl;
    int res;
    cout<<">"; cin>> res;
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
            b_est(nombreE,estudiantes);
            break;
    }

}

void agregar()
{
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
            //
            break;
    }

}
void modificar()
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
