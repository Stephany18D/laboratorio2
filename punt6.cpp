#include <iostream>

using namespace std;

int p6() {
    string entrada;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, entrada);

    cout << "Original: " << entrada << endl;

    for (char& c : entrada) {
        if (islower(c)) {
            c = toupper(c);
        }
    }

    cout << "En mayuscula: " << entrada << endl;

    return 0;
}
