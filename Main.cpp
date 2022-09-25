#include <iostream>
using namespace std;

void consulta()
{
    int respuesta;
    cout<<  "Que tipo de consulta desea hacer?\n";
    cout<<  "1. Consultar un ramo\n";
    cout<<  "2. Consultar un profesor\n";
    cout<<  "3. Consultar un alumno\n";
    cout<<  "presione cualquier otra numero para salir"<<endl;
    cout<<  "ADIOS  \n";
    cin>> respuesta;
    switch (respuesta) {
        case 1:
            //ramo
            break;

        case 2:
            //profesor
            break;

        case 3:
            //alumno
            break;
    }
}

bool agregar(){

    return false;
}

void modificar(){

}

int main()
{
    bool salir = false;
    int res;
    while(!salir)
    {
        cout<<"Que tipo de operacion desea hacer?\n";
        cout<<"1. Realizar una consulta\n";
        cout<<"2. Agregar informacion al sistema\n";
        cout<<"3. Modificar informacion del sistema\n";
        cout<<"4. Salir"<<endl;
        cin>>res;

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
