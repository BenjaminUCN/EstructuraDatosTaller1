#include <iostream>
#include "NodeList.h"
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "funciones.h"
using namespace std;

NodeList<Estudent>* estudiantes = new NodeList<Estudent>();
NodeList<Profesor>* profesores = new NodeList<Profesor>();;
NodeList<Course>* cursos = new NodeList<Course>();;

bool menu() {
    int res;
    cout << "------------: MENU :------------" << endl;
    cout << "Que tipo de operacion desea hacer?\n";
    cout << "1. Realizar una consulta\n";
    cout << "2. Agregar informacion al sistema\n";
    cout << "3. Modificar informacion del sistema\n";
    cout << "4. Salir" << endl;
    cout << ">";cin >> res;

    switch (res) {
        case 1:
            consulta(estudiantes, profesores, cursos);
            break;

        case 2:
            agregar(estudiantes, profesores, cursos);
            break;

        case 3:
            modificar(estudiantes, profesores, cursos);
            break;

        case 4:
            return true;

        default:
            cout << "Ingrese una opcion valida  \n";
    }
    return false;
}

int main()
{
    bool salir;
    do{
        salir=menu();
    }while(!salir);

    return 0;
 }
