#include <iostream>
#include <unordered_map>

using namespace std;

int p10() {
    unordered_map<char, int> valores = {
        {'M', 1000}, {'D', 500}, {'C', 100},
        {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
    };

    string numeroRomano;
    cout << "Ingrese un numero en sistema romano: ";
    cin >> numeroRomano;

    int numeroArabigo = 0;
    for (size_t i = 0; i < numeroRomano.size(); ++i) {
        if (i < numeroRomano.size() - 1 && valores[numeroRomano[i]] < valores[numeroRomano[i + 1]]) {
            numeroArabigo -= valores[numeroRomano[i]];
        } else {
            numeroArabigo += valores[numeroRomano[i]];
        }
    }

    cout << "El numero ingresado fue: " << numeroRomano << " Que corresponde a: " << numeroArabigo << "." << endl;

    return 0;
}
