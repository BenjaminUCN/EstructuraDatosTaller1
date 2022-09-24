#include<string>
#include<iostream>
#include"Course.h"
#pragma once
using namespace std;

class Estudent
{
    private: // Atributos
        int semester, age;
        string name, surname;
        Course courses[5];
    public:
        Estudent(); // Constructor
        int getSemester();
        int getAge();
        string getName();
        string getSurname();
        void setSemester(int _semester);
        void setAge(int _age);
        void setName(string _name);
        void setSurname(string _surname);

};