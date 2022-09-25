#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"NodeList.h"
#include"Estudent.h"

using namespace std;

int main2()
{
    //NodeList<int> lista;
    NodeList<Estudent> lista;
    

    int opcion, dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Buscar un elemento de la lista\n";
        cout<<"4. Eliminar un elemento de la lista\n";
        cout<<"5. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        
        switch(opcion)
        {
            case 1: 
                    {cout<<"\nDigite el nombre: ";
                    string name;
                    cin>>name;
                    Estudent e = Estudent(name);

                    cout<<"\nDigite la edad: ";
                    cin>>dato;
                    e.setAge(dato);

                    lista.add(e);}
                    break;
            case 2: //a
                    break;
            case 3: cout<<"\nDigite el indice del elemento: ";
                    cin>>dato;
                    cout<< lista[dato]->getName();
                    break;
            case 4: cout<<"\nDigite el nombre a remover: ";
                    string name;
                    cin>>name;

                    cout<<"\nDigite la edad: ";
                    cin>>dato;
                    for (int i = 0;i<lista.size; i++)
                    {
                        if((lista[i]->getAge() == dato) && (lista[i]->getName() == name)){
                            lista.remove(i);
                            break;
                        }
                    }
                    break;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }while(opcion != 5);

    getch();
    return 0;
}