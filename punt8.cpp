#include <iostream>
using namespace std;

int p8() {
    string entrada;
    cout << "Ingresa una cadena de caracteres: ";
    getline(cin, entrada);

    string caracteres = "";
    string numeros = "";

    for (char c : entrada) {
        if (isdigit(c)) {
            numeros += c;
        } else {
            caracteres += c;
        }
    }

    cout << "Original: " << entrada << endl;
    cout << "Texto: " << caracteres << ". Numero: " << numeros << endl;

    return 0;
}
