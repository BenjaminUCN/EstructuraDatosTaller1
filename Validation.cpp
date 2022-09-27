#include<iostream>
#include<limits>
#include"Validation.h"

using namespace std;

bool validarInt(){
    if(!cin.good()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        return false;
    }
    return true;
}