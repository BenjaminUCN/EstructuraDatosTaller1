
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);

int main()
{
    Nodo *lista = NULL;

    int opcion, dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        switch(opcion)
        {
            case 1: cout<<"\nDigite un numero: ";
                    cin>>dato;
                    insertarLista(lista, dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: mostrarLista(lista);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\nDigite un numero: ";
                    cin>>dato;
                    buscarLista(lista, dato);
                    break;
        }
        cout<<"\n";
        system("pause");
        system("cls");
    }while(opcion != 3);

    

    mostrarLista(lista);

    getch();
    return 0;
}

void insertarLista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
}

void mostrarLista(Nodo *lista)
{
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<(actual->dato)<<"->";
        actual = actual->siguiente;
    }
};

void buscarLista(Nodo *lista, int n)
{
    Nodo *actual = new Nodo();
    actual = lista;

    bool flag;

    while((actual != NULL) && (actual->dato <=n)){
        if(actual->dato == n)
        {
            flag = true;
        }
        actual = actual->siguiente;
    }

    if(flag == true){
        cout<<"El elemento "<<n<<" está en la lista.\n";
    }else{
        cout<<"El elemento "<<n<<" no está en la lista.\n";
    }
};