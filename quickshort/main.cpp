#include <iostream>

#include "quickshort.h"
#include <vector>
int main() {
    std::vector<int>lista;
    lista.push_back(2);
    lista.push_back(9);
    lista.push_back(1);
    lista.push_back(27);
    lista.push_back(5);
    ordenar(lista);
}