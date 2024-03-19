#include <iostream>
#include <algorithm>
using namespace std;

int p18() {
    int n;
    cout << "Ingrese el numero n: ";
    cin >> n;

    string digitos = "0123456789";

    for (int i = 1; i < n; i++) {
        next_permutation(digitos.begin(), digitos.end());
    }

    cout << "La permutacion numero " << n << " es: " << digitos << endl;

    return 0;
}
