#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

using namespace std;

// fución para devolver el vector

template <typename T>

void devolverVector(const vector<T>& v) {
    for (const auto& x : v) {
        cout << x << " ";
    }
    cout << endl << endl;
}


int main() {

// vectores búsqueda binaria

    vector<int> v1{1, 3, 5, 7, 9, 11, 13, 15};
    int pos = BusquedaBinaria(7, v1, 0, v1.size() - 1);
    cout << "Posición del 7: " << pos << endl;

    vector<float> vFloat{1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int posFloat = BusquedaBinaria(4.4f, vFloat, 0, vFloat.size() - 1);
    cout << "Posición del 4.4: " << posFloat << endl;

    vector<char> vChar{'a', 'c', 'e', 'g', 'i'};
    int posChar = BusquedaBinaria('e', vChar, 0, vChar.size() - 1);
    cout << "Posición de la e: " << posChar << endl;
    
// vector búsqueda binaria inversa

    vector<int> vDesc{15, 13, 11, 9, 7, 5, 3, 1};
    int posDesc = BusquedaBinaria_INV(7, vDesc, 0, vDesc.size() - 1);
    cout << "Posición de 7 en vector descendente: " << posDesc << std::endl;

// vectores quick sort

    vector<int> vIntQS = {5, 3, 8, 4, 2, 7, 1, 10, 6, 9};
    auto startInt1 = std::chrono::system_clock::now();
    QuickSort(vIntQS, 0, vIntQS.size() - 1);
    auto endInt1 = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> durationInt1 = endInt1 - startInt1;
    cout << "Vector de enteros ordenado: ";
    devolverVector(vIntQS);
    cout << "Time: " << durationInt1.count() << "s" << endl << endl;

    vector<float> vFloatQS = {5.5, 3.3, 8.8, 4.4, 2.2, 7.7, 1.1, 10.0, 6.6, 9.9};
    auto startFl1 = std::chrono::system_clock::now();
    QuickSort(vFloatQS, 0, vFloatQS.size() - 1);
    auto endFl1 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationFl1 = endFl1 - startFl1;
    cout << "Vector ordenado (float): ";
    devolverVector(vFloatQS);
    cout << "Time: " << durationFl1.count() << "s" << endl << endl;

    vector<char> vCharQS = {'e', 'c', 'h', 'd', 'b', 'g', 'a', 'j', 'f', 'i'};
    auto startCh1 = std::chrono::system_clock::now();
    QuickSort(vCharQS, 0, vCharQS.size() - 1);
    auto endCh1 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationCh1 = endCh1 - startCh1;
    cout << "Vector ordenado (char): ";
    devolverVector(vCharQS);
    cout << "Time: " << durationCh1.count() << "s" << endl << endl;

// vectores quick sort pivote primer elemento

    vector<int> vIntQSPrimer = {5, 3, 8, 4, 2, 7, 1, 10, 6, 9};
    auto startInt2 = std::chrono::system_clock::now();
    QuickSortPrimer(vIntQSPrimer, 0, vIntQSPrimer.size() - 1);
    auto endInt2 = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> durationInt2 = endInt2 - startInt2;
    cout << "Vector de enteros ordenado (pivote primero): ";
    devolverVector(vIntQSPrimer);
    cout << "Time: " << durationInt2.count() << "s" << endl << endl;
    
    vector<float> vFloatQSPrimer = {5.5, 3.3, 8.8, 4.4, 2.2, 7.7, 1.1, 10.0, 6.6, 9.9};
    auto startFl2 = std::chrono::system_clock::now();
    QuickSortPrimer(vFloatQSPrimer, 0, vFloatQSPrimer.size() - 1);
    auto endFl2 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationFl2 = endFl2 - startFl2;
    cout << "Vector ordenado (float, pivote primero): ";
    devolverVector(vFloatQSPrimer);
    cout << "Time: " << durationFl2.count() << "s" << endl << endl;
    
    vector<char> vCharQSPrimer = {'e', 'c', 'h', 'd', 'b', 'g', 'a', 'j', 'f', 'i'};
    auto startCh2 = std::chrono::system_clock::now();
    QuickSortPrimer(vCharQSPrimer, 0, vCharQSPrimer.size() - 1);
    auto endCh2 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationCh2 = endCh2 - startCh2;
    cout << "Vector ordenado (char, pivote primero): ";
    devolverVector(vCharQSPrimer);
    cout << "Time: " << durationCh2.count() << "s" << endl << endl;

// vectores quick sort pivote random

    vector<int> vIntQSRand = {5, 3, 8, 4, 2, 7, 1, 10, 6, 9};
    auto startInt3 = std::chrono::system_clock::now();
    QuickSortRandom(vIntQSRand, 0, vIntQSRand.size() - 1);
    auto endInt3 = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> durationInt3 = endInt3 - startInt3;
    cout << "Vector de enteros ordenado (pivote aleatorio): ";
    devolverVector(vIntQSRand);
    cout << "Time: " << durationInt3.count() << "s" << endl << endl;

    vector<float> vFloatQSRand = {5.5, 3.3, 8.8, 4.4, 2.2, 7.7, 1.1, 10.0, 6.6, 9.9};
    auto startFl3 = std::chrono::system_clock::now();
    QuickSortRandom(vFloatQSRand, 0, vFloatQSRand.size() - 1);
    auto endFl3 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationFl3 = endFl3 - startFl3;
    cout << "Vector ordenado (float, pivote aleatorio): ";
    devolverVector(vFloatQSRand);
    cout << "Time: " << durationFl3.count() << "s" << endl << endl;

    vector<char> vCharQSRand = {'e', 'c', 'h', 'd', 'b', 'g', 'a', 'j', 'f', 'i'};
    auto startCh3 = std::chrono::system_clock::now();
    QuickSortRandom(vCharQSRand, 0, vCharQSRand.size() - 1);
    auto endCh3 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationCh3 = endCh3 - startCh3;
    cout << "Vector ordenado (char, pivote aleatorio): ";
    devolverVector(vCharQSRand);
    cout << "Time: " << durationCh3.count() << "s" << endl << endl;

// vectores quick sort pivote central

    vector<int> vIntQSCentral = {5, 3, 8, 4, 2, 7, 1, 10, 6, 9};
    auto startInt4 = std::chrono::system_clock::now();
    QuickSortCentral(vIntQSCentral, 0, vIntQSCentral.size() - 1);
    auto endInt4 = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> durationInt4 = endInt4 - startInt4;
    cout << "Vector de enteros ordenado (pivote central): ";
    devolverVector(vIntQSCentral);
    cout << "Time: " << durationInt4.count() << "s" << endl << endl;

    vector<float> vFloatQSCentral = {5.5, 3.3, 8.8, 4.4, 2.2, 7.7, 1.1, 10.0, 6.6, 9.9};
    auto startFl4 = std::chrono::system_clock::now();
    QuickSortCentral(vFloatQSCentral, 0, vFloatQSCentral.size() - 1);
    auto endFl4 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationFl4 = endFl4 - startFl4;
    cout << "Vector ordenado (float, pivote central): ";
    devolverVector(vFloatQSCentral);
    cout << "Time: " << durationFl4.count() << "s" << endl << endl;

    vector<char> vCharQSCentral = {'e', 'c', 'h', 'd', 'b', 'g', 'a', 'j', 'f', 'i'};
    auto startCh4 = std::chrono::system_clock::now();
    QuickSortCentral(vCharQSCentral, 0, vCharQSCentral.size() - 1);
    auto endCh4 = std::chrono::system_clock::now();
    std::chrono::duration<float, milli> durationCh4 = endCh4 - startCh4;
    cout << "Vector ordenado (char, pivote central): ";
    devolverVector(vCharQSCentral);
    cout << "Time: " << durationCh4.count() << "s" << endl << endl;
    
    
    
    return 0;

}
