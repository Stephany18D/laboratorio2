#include <iostream>
#include <ctime>

int p2() {
    using namespace std;

    const int tamano = 10;
    char letras[tamano];
    int conteo[26] = {0};

    srand(time(nullptr));

    cout << "Letras generadas aleatoriamente: ";
    for (int i = 0; i < tamano; i++) {
        letras[i] = 'A' + rand() % 26;
        cout << letras[i];

        conteo[letras[i] - 'A']++;
    }

    cout << "\n\nFrecuencia de cada letra:\n";
        for (int i = 0; i < 26; ++i) {
            char letra = 'A' + i;
            if (conteo[i] > 0) {
                cout << letra << ": " << conteo[i] << endl;
            }
    }

    return 0;
}
