#include <iostream>
using namespace std;

int cadena(const string& input) {
    int resultado = 0;

    for (char c : input) {
        resultado = resultado * 10 + (c - '0');
    }

    return resultado;
}

int p4() {
    string num;

    cout << "Ingresa una cadena de caracteres numericos: ";
    cin >> num;

    int numero = cadena(num);

    cout << "El numero entero obtenido es: " << numero << endl;

    return 0;
}
