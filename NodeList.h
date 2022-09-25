#include<string>
#include<iostream>
#pragma once
using namespace std;

template<class T>
struct Nodo
{
    T data;
    Nodo<T> *next;
};

template<class T>
class NodeList
{
    public:
        Nodo<T> *first;
        Nodo<T> *lastGet;
        int lastGetIndex;
        int size;

        NodeList<T>(){
            first = NULL;
            size = 0;
        };
        void add(T data){
            Nodo<T> *new_node = new Nodo<T>();
            new_node->data = data;

            new_node->next = first;
            first = new_node;
            size++;
        };
        T* get(int index)
        {
            if(index>=size){
                return NULL;
            }

            //Si se necesita el primer elemento
            if(index == 0){
                lastGet = first;
                lastGetIndex = index;
                return &(this->first->data);
            }

            //Para optimizar busqueda con ciclo for
            //Si el ultimo elemento buscado fue n y se necesita n+1
            if(index == lastGetIndex+1){
                lastGet = lastGet->next;
                lastGetIndex = index;
                return &(lastGet->data);
            }

            //Buscar desde [0] hasta llegar a [index] 
            Nodo<T> *current_node = this->first;

            for(int i=0;i<index;i++)
            {
                current_node = current_node->next;
            }

            lastGet = current_node;
            lastGetIndex = index;
            return &(current_node->data);
        };
        T* operator[](int index)
        {
            return get(index);
        };
        void remove(int index)
        {
            get(index-1);
            Nodo<T> *previus_node = lastGet;
            Nodo<T> *remove_node = previus_node->next;
            previus_node->next = remove_node->next;
            delete remove_node;
            size--;
        };
};