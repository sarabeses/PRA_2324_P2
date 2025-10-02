#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>

template <typename T>

int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin) {

    if (ini > fin) {
        return -1;
    }

    int med = (ini + fin) / 2;

    if (v[med] == x) {

        return med;

    } else if (v[med] > x) {

        return BusquedaBinaria(x, v, ini, med - 1);

    } else {

        return BusquedaBinaria(x, v, med + 1, fin);

    }
}

template <typename T>

int BusquedaBinaria_INV(T x, std::vector<T>& v, int ini, int fin) {
    
    if (ini > fin) {
        return -1;
    }

    int med = (ini + fin) / 2;

    if (v[med] == x) {
        return med;
    }
    else if (v[med] < x) {
        return BusquedaBinaria_INV(x, v, ini, med - 1);
    } else {
        return BusquedaBinaria_INV(x, v, med + 1, fin);
    }
}

#endif
