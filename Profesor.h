#include<string>
#include<iostream>
#include"Course.h"
#pragma once
using namespace std;

class Profesor{
    private: // Atributos
        string name, surname;
        Course courses[3];
    public:
        Profesor(); // Constructor
        void setName(string);
        void setSurname(string);
        string getName();
        string getSurname();
        void mostrar();


};