#include <iostream>
using namespace std;

void consulta()
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
            //
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

int main()
{
    bool salir = false;
    int res;
    while(!salir)
    {
        cout<<"------------: MENU :------------"<<endl;
        cout<<"Que tipo de operacion desea hacer?\n";
        cout<<"1. Realizar una consulta\n";
        cout<<"2. Agregar informacion al sistema\n";
        cout<<"3. Modificar informacion del sistema\n";
        cout<<"4. Salir"<<endl;
        cout<<">";cin>>res;

        switch(res)
        {
            case 1:
                consulta();
                break;

            case 2:
                agregar();
                break;

            case 3:
                modificar();
                break;

            case 4:
                salir=true;

        }
    }
    return 0;
 }
