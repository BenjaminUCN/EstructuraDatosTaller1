<<<<<<< HEAD
//
// Created by José Miguel Carrillo Rojas on 24-09-22.
#include <iostream>
using namespace std;

int consulta()
{
    void res;
    cout<<  "¿Que tipo de consulta desea hacer?     \n";
    cout<<  "1. Consultar un ramo  \n";
    cout<<  "2. Consultar un profesor  \n";
    cout<<  "3. Consultar un alumno     \n";
    cout<<  "4. Volver al menú  \n";
    cin>>res;

    switch(res)
    {

        case 1:
            cRamo();
            break;

        case 2:
            cProfe();
            break;

        case 3:
            cAlu();
            break;

        case 4:
            return;

        default:
            break;

    }
}

int main
{
    bool condicion = true;
    int res;


    while(condicion)
    {
        cout<<  "¿Que tipo de operación desea hacer?     \n";
        cout<<  "1. Realizar una consulta  \n";
        cout<<  "2. Agregar información al sistema  \n";
        cout<<  "3. Modificar información del sistema     \n";
        cout<<  "4. Salir del programa    \n";

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
                cout<<  "Programa finalizado    \n";
                break;

            default:
                cout<<  "Seleccione una opcion valida   \n";

        }
    }
    return 0;
 };
=======
#include <iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
}
>>>>>>> origin/main
