#include <iostream>

using namespace std;

unsigned long calcularC(int n) {
    unsigned long numerador = 1;
    unsigned long denominador = 1;

    for (int i = 1; i <= n; i++) {
        numerador *= n + i;
        denominador *= i;
    }

    return numerador / denominador;
}

int p16() {
    int n;

    cout << "Ingresa el tamano de la cuadricula: ";
    cin >> n;

    unsigned long caminos = calcularC(n);

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos << " caminos." << endl;

    return 0;
}
