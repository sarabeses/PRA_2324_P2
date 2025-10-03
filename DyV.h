#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

// búsqueda binaria

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

// búsqueda binaria inversa

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

// quicksort

template <typename T>

int Partition(std::vector<T>& v, int ini, int fin) {

    T x = v[fin];

    int i = ini;

    for (int j = ini; j < fin; ++j) {

        if (v[j] <= x) {

            std::swap(v[i], v[j]);
            ++i;
        }
    }
    std::swap(v[i], v[fin]);
    return i;
}

template <typename T>

void QuickSort(std::vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(v, ini, fin);
        QuickSort(v, ini, pivot - 1);
        QuickSort(v, pivot + 1, fin);
    }
}

// quick sort primer elemento es pivote

template <typename T>

int PartitionPrimer(std::vector<T>& v, int ini, int fin) {
    std::swap(v[ini], v[fin]);
    return Partition(v, ini, fin);
}

template <typename T>

void QuickSortPrimer (std::vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivote = PartitionPrimer (v, ini, fin);
        QuickSortPrimer(v, ini, pivote - 1);
        QuickSortPrimer(v, pivote + 1, fin);
    }
}

// quick sort random

template <typename T>

int PartitionRandom(std::vector<T>& v, int ini, int fin) {
    std::srand(std::time(nullptr));
    int randV = ini + std::rand() % (fin - ini + 1);
    std::swap(v[randV], v[fin]);
    return Partition(v, ini, fin);
}

template <typename T>

void QuickSortRandom(std::vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivote = PartitionRandom(v, ini, fin);
        QuickSortRandom(v, ini, pivote - 1);
        QuickSortRandom(v, pivote + 1, fin);
    }
}

// quick sort central

template <typename T>

int PartitionCentral(std::vector<T>& v, int ini, int fin) {
    int mid = ini + (fin - ini) / 2;
    std::swap(v[mid], v[fin]);
    return Partition(v, ini, fin);
}

template <typename T>

void QuickSortCentral(std::vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivote = PartitionCentral(v, ini, fin);
        QuickSortCentral(v, ini, pivote - 1);
        QuickSortCentral(v, pivote + 1, fin);
    }
}

#endif
