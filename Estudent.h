#include<string>
#include<iostream>
#include"Course.h"
#include"Nodelist.h"
#pragma once
using namespace std;

class Estudent
{
    private: // Atributos
        int semester, age;
        string name, surname;
        NodeList<Course*> courses;
    public:
        Estudent();
        Estudent(string _name); // Constructor
        int getSemester();
        int getAge();
        string getName();
        string getSurname();
        void mostrar();
        void setSemester(int _semester);
        void setAge(int _age);
        void setName(string _name);
        void setSurname(string _surname);
        Course* getCourse(int index);
        void addCourse(Course* course);
        void removeCourse(int index);
        int coursesSize();
        void mostrarRamos();

};