#include <iostream>
#include "../ArbolBinario/ArbolBinario.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 06/03\n" << std::endl;
    ArbolBinario<int> maokai;
    maokai.put(5);
    maokai.put(3);
    maokai.put(7);
    maokai.put(1);
    maokai.put(2);
    maokai.put(4);
    maokai.put(6);
    maokai.put(8);
    maokai.put(9);

    maokai.print();

    cout << maokai.contarPorNivel(8);

    return 0;
}