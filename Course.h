#include<string>
#include<iostream>
#pragma once
using namespace std;

class Course{
    private: // Atributos
        string name, career, classroom;
    public:
        Course(); // Constructor
        string getName();
        string getCareer();
        string getClassroom();
        void setName(string _name);
        void setCareer(string _career);
        void setClassroom(string _classroom);
        void mostrar();
};