#pragma once
#include "Arreglo.h"
#include <iostream>
using namespace std;
int Arreglo::get_tamano()
{
    return _tamano;
}


void Arreglo::set_tamano(int tam) {
    this->_tamano = tam;
}



int* Arreglo::get_datos() {
    return _datos;
}


void Arreglo::set_datos(int *dat) {
    this->_datos = dat;
}

void Arreglo::imprimir() {
    cout << "[";

    for (int i = 0; i < _tamano; i++) {
        cout << *(_datos + i);

        if (i != _tamano - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;
}

void Arreglo::agregar(int elemento) {

    if (_tamano == 0) {
        _datos = new int[1];
    }

    else  {
        int* nuevo = new int[_tamano + 1];

        for (int i = 0; i < _tamano; i++) {
            *(nuevo + i) = *(_datos + i);
        }

        delete[] _datos;
        _datos = nuevo;
    }

    _datos[_tamano] = elemento;
    _tamano++;
}