#include<string>
#include<iostream>
#include"Course.h"
#include"NodeList.h"
#pragma once
using namespace std;

class Profesor{
    private: // Atributos
        string name, surname;
        NodeList<Course*> courses;
    public:
        Profesor(); // Constructor
        void setName(string);
        void setSurname(string);
        string getName();
        string getSurname();
        void mostrar();
        Course* getCourse(int index);
        void addCourse(Course* course);
        void removeCourse(int index);
        void mostrarRamos();


};