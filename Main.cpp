#include <iostream>
using namespace std;
void consulta()
{
    string respuesta;
    cout<<  "Que tipo de consulta desea hacer?\n";
    cout<<  "1. Consultar un ramo\n";
    cout<<  "2. Consultar un profesor\n";
    cout<<  "3. Consultar un alumno\n";
    cout<<  "4. Volver al menu   \n";
    cin>> respuesta;
    switch (respuesta) {
        case "1":
            //ramo
            break;

        case "2":
            //profesor
            break;

        case "3":
            //alumno
            break;
            
        case "4":
            return;
            
        default:
            cout<<  "Ingrese una opción válida  \n";
    }
}

void agregar(){
    
    string respuesta;
    cout<<  "Que desea agregar?  \n";
    cout<<  "1. Agregar un ramo al sistema  \n";
    cout<<  "2. Agregar un profesor al sistema  \n";
    cout<<  "3. Agregar un alumno al sistema    \n";
    cout<<  "4. Volver al menu   \n";
    cin>> respuesta;
    switch (respuesta) {
        case "1":
            //ramo
            break;

        case "2":
            //profesor
            break;

        case "3":
            //alumno
            break;
            
        case "4":
            return;
            
        default:
            cout<<  "Ingrese una opción válida  \n";

}

void modificar(){
    
    string respuesta;
    cout<<  "Que desea modificar?  \n";
    cout<<  "1. Modificar un ramo del sistema  \n";
    cout<<  "2. Modificar un profesor del sistema  \n";
    cout<<  "3. Modificar un alumno del sistema    \n";
    cout<<  "4. Volver al menu   \n";
    cin>> respuesta;
    switch (respuesta) {
        case "1":
            //ramo
            break;

        case "2":
            //profesor
            break;

        case "3":
            //alumno
            break;
            
        case "4":
            return;
            
        default:
            cout<<  "Ingrese una opción válida  \n";

}

int main()
{
    bool condicion = true;
    int res;
    do
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

        } while(condicion);
    }
    return 0;
 }
