#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main() {

    vector<int> v1{1, 3, 5, 7, 9, 11, 13, 15};
    int pos = BusquedaBinaria(7, v1, 0, v1.size() - 1);
    cout << "Posición del 7: " << pos << endl;

    vector<float> vFloat{1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int posFloat = BusquedaBinaria(4.4f, vFloat, 0, vFloat.size() - 1);
    cout << "Posición del 4.4: " << posFloat << endl;

    vector<char> vChar{'a', 'c', 'e', 'g', 'i'};
    int posChar = BusquedaBinaria('e', vChar, 0, vChar.size() - 1);
    cout << "Posición de la e: " << posChar << endl;

    return 0;

}
