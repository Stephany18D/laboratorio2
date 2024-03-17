#include <iostream>

using namespace std;

bool compararCadenas(char cadena1[], char cadena2[]) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
        i++;
    }
    return (cadena1[i] == '\0' && cadena2[i] == '\0');
}

int p3() {
    char cadena1[] = "Hola";
    char cadena2[] = "Hola";

    cout << "cadena1 (\"" << cadena1 << "\") y cadena2 (\"" << cadena2 << "\") son ";
      if (compararCadenas(cadena1, cadena2)) {
        cout << "iguales" << endl;
      } else {
        cout << "diferentes" << endl;
      }

    return 0;
}
