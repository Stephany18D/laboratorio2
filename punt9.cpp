#include <iostream>
using namespace std;

int p9() {
    int suma = 0;
    string resultado;

    int n;
    cout << "Ingresa el valor de n: ";
    cin >> n;

    string numero;
    cout << "Ingresa una cadena de caracteres numericos: ";
    cin >> numero;


    while (numero.length() % n != 0) {
            numero = "0" + numero;
        }

    for (size_t i = 0; i < numero.length(); i += n) {
        string cadena = numero.substr(i, n);
        int num = stoi(cadena);
        suma += num;
        resultado += (i == 0) ? cadena : "+" + cadena;
    }

    cout << "Original: " << numero << endl;
    cout << "Suma: " << resultado << " = " << suma << endl;

    return 0;
}
