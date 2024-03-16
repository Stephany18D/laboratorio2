#include <iostream>

int p2() {
    using namespace std;

    char letras[10];
    int conteo[26] = {0};


    for(int i = 0; i < 10; i++) {
        letras[i] = 'A' + rand() % 26; // Genera una letra aleatoria mayúscula
        cout << letras[i];


        conteo[letras[i] - 'A']++;
    }

    cout << endl;


    for(int i = 0; i < 26; i++) {
        if(conteo[i] > 0) {
            char letra = 'A' + i;
            cout << letra << ": " << conteo[i] << endl;
        }
    }

    return 0;
}
