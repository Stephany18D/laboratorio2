#include <iostream>
using namespace std;

int sum(int n) {
    int suma = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int p17() {
    int limite;
    int sumaTotal = 0;

    cout << "Ingrese un numero: ";
    cin >> limite;

    for (int i = 1; i < limite; i++) {
        int sumaA = sum(i);
        int sumaB = sum(sumaA);

        if (i == sumaB && i != sumaA) {
            sumaTotal += i;
        }
    }

    cout << "El resultado de la suma es: " << sumaTotal << endl;

    return 0;
}
