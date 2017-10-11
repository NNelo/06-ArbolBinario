#include <iostream>
#include "../ArbolBinario/ArbolBinario.h"

using namespace std;

const int cant = 30;

int main() {
    std::cout << "Ejercicio 06/03\n" << std::endl;
    ArbolBinario<int> maokai;
    int staticArray[cant];

    srand(time(NULL));
    for (int i = 0; i < cant; ++i) {
        staticArray[i] = rand() % 401 + 100;
    }

    int cont = cant;
    for (int j = 0; j < cant; ++j) {
        try {
            maokai.put(staticArray[j]);
        } catch (int e) {
            cont--;
        }
    }

    maokai.print();
    int i = 0, tmp;
    do {
        tmp = maokai.contarPorNivel(i);
        cout << "Hojas en nivel " << i << ": " << tmp << endl;
        ++i;
    } while (tmp != 0);

    return 0;
}