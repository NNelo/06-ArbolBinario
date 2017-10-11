#include <iostream>
#include "../ArbolBinario/ArbolBinario.h"

//Ejercicio N°4. Especificar la operación espejo que devuelve la imagen especular de un árbol binario

const int cant = 20;

int main() {
    std::cout << "Ejercicio 06/04\n" << std::endl;
    ArbolBinario<int> roble;
    int staticArray[cant];

    srand(time(NULL));
    for (int i = 0; i < cant; ++i) {
        staticArray[i] = rand() % 401 + 100;
    }

    int cont = cant;
    for (int j = 0; j < cant; ++j) {
        try {
            roble.put(staticArray[j]);
        } catch (int e) {
            cont--;
        }
    }

    roble.print();

    cout << "Ahora espejado\n";
    roble.espejo();
    roble.print();

    roble.inorder();
    cout << std::endl;
    roble.espejo();
    roble.inorder();

    cout << "\n Sobrecarga == para arboles exactamente iguales (datos y pos)\n";
    ArbolBinario<int> calden;
    cout << "Vacios " << (calden == roble) << std::endl;

    cont = cant;
    for (int k = 0; k < cant; ++k) {
        try {
            calden.put(staticArray[k]);
        } catch (int e) {
            cont--;
        }
    }

    cout << "iguales: " << (roble == calden) << std::endl;

    calden.put(816);

    cout << "diferentes: " << (roble == calden) << "\n";
    return 0;
}