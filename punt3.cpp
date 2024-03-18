#include <iostream>

using namespace std;

bool cadenas(string cadena1, string cadena2) {
    if (cadena1.length() != cadena2.length()) {
            return false;
        } else {
            return cadena1 == cadena2;
        }
    }

int p3() {
    string cadena1 = "Hola";
    string cadena2 = "Hola";
    string cadena3 = "Hello";

    // 1 es verdadero
    // 0 es falso
    cout << cadenas(cadena1, cadena2) << endl;
    cout << cadenas(cadena1, cadena3) << endl;

    return 0;
}
