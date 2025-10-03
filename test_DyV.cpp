#include <iostream>
#include <vector>
#include "DyV.h"

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
    
    vector<int> vDesc{15, 13, 11, 9, 7, 5, 3, 1};
    int posDesc = BusquedaBinaria_INV(7, vDesc, 0, vDesc.size() - 1);
    cout << "Posición de 7 en vector descendente: " << posDesc << std::endl;

// vectores quick sort

    vector<int> vIntQS = {5, 3, 8, 4, 2, 7, 1, 10, 6, 9};
    QuickSort(vIntQS, 0, vIntQS.size() - 1);
    cout << "Vector de enteros ordenado: ";
    devolverVector(vIntQS);

    vector<float> vFloatQS = {5.5, 3.3, 8.8, 4.4, 2.2, 7.7, 1.1, 10.0, 6.6, 9.9};
    QuickSort(vFloatQS, 0, vFloatQS.size() - 1);
    cout << "Vector ordenado (float): ";
    devolverVector(vFloatQS);

    vector<char> vCharQS = {'e', 'c', 'h', 'd', 'b', 'g', 'a', 'j', 'f', 'i'};
    QuickSort(vCharQS, 0, vCharQS.size() - 1);
    cout << "Vector ordenado (char): ";
    devolverVector(vCharQS);

    return 0;

}
