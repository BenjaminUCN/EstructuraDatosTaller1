<<<<<<< HEAD
//
// Created by José Miguel Carrillo Rojas on 24-09-22.
//
using namespace std;

void consulta()
{
    cout<<  "¿Que tipo de consulta desea hacer?     \n";
    cout<<  "1. Consultar un ramo  \n";
    cout<<  "2. Consultar un profesor  \n";
    cout<<  "3. Consultar un alu,no     \n";
    cout<<  "4. Volver al menú  \n";
}

int main
{
    boolean condicion = true;
    int res;
    while(condicion)
    {
        cout<<  "¿Que tipo de operación desea hacer?     \n";
        cout<<  "1. Realizar una consulta  \n";
        cout<<  "2. Agregar información al sistema  \n";
        cout<<  "3. Modificar información del sistema     \n";

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
