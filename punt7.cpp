#include <iostream>
using namespace std;

int p7() {
    string cadena;
    string repetido;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    cout << "Original: " << cadena << endl;

    for (char c : cadena) {
        if (repetido.find(c) == string::npos) {
            repetido += c;
        }
    }

    cout << "Sin repetidos: " << repetido<< endl;

    return 0;
}
