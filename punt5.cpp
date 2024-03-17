#include <iostream>

using namespace std;

void cadena1(int numero, string& cadena) {
    cadena = to_string(numero);
}

int p5() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    string cadenaResultado;

    cadena1(numero, cadenaResultado);
    cout << "Cadena resultante: " << cadenaResultado << endl;

    return 0;
}
