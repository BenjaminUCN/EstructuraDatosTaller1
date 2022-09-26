#include <iostream>
#include "NodeList.h"
#include "Estudent.h"
#include "Course.h"
#include "Profesor.h"
#include "funciones.h"
using namespace std;

int main()
{

    NodeList<Estudent>* estudiantes = new NodeList<Estudent>();
    NodeList<Profesor>* profesores = new NodeList<Profesor>();;
    NodeList<Course>* cursos = new NodeList<Course>();;
    Estudent e_aux;
    Course c_aux;
    Profesor p_aux;



    e_aux.setName("Roberto");
    e_aux.setSurname("Rpjas");
    estudiantes->add(e_aux);

    e_aux.setName("Tomatican");
    e_aux.setSurname("Con atun");
    estudiantes->add(e_aux);




    bool salir = false;
    int res;
    while(!salir)
    {
        cout<<"Posicion de estudiantes: " <<estudiantes<<endl;
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
                consulta(estudiantes, profesores, cursos);
                break;

            case 2:
                agregar(estudiantes, profesores, cursos);
                break;

            case 3:
                modificar(estudiantes, profesores, cursos);
                break;

            case 4:
                salir=true;

        }
    }
    return 0;
 }
