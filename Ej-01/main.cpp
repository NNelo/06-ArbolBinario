#include <iostream>
#include "../ArbolBinario/ArbolBinario.h"

using namespace std;

//Ejercicio N°1. Diseñar una aplicación que permita: Cargar en un array 30 números generados aleatoriamente entre
//100 y 500. Imprimir los números. Crear un árbol binario de búsqueda con los datos del array.

int const cant = 30;

int main() {
    ArbolBinario<int> arbolito;
    int staticArray[cant];

    srand(time(NULL));
    for (int i = 0; i < cant; ++i) {
        staticArray[i] = rand() % 401 + 100;
    }

    int cont = cant;
    for (int j = 0; j < cant; ++j) {
        try {
            arbolito.put(staticArray[j]);
        } catch (int e) {
            cont--;
        }
    }

    arbolito.print();
    cout << "El arbol tiene " << cont << " hojas distintas\n";
    return 0;
}