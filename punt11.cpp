#include <iostream>
#include <vector>
using namespace std;

int p11() {
    vector<string> sala(15, string(20, '-'));

    while (true) {
        cout << "\nSala de Cine - Estado de Asientos\n";
        cout << "----------------------------------\n";
        for (int i = 0; i < 15; i++) {
            cout << "Fila " << char('A' + i) << "  ";
            for (int j = 0; j < 20; j++) {
                cout << sala[i][j] << " ";
            }
            cout << endl;
        }

        char fila;
        int numAsiento;

        cout << "\nIngrese la fila (A-O) y el numero del asiento (1-20): ";
        cin >> fila;

        if (fila == 'q') {
            break;
        }

        cin >> numAsiento;

        if (fila < 'A' || fila > 'O' || numAsiento < 1 || numAsiento > 20) {
            cout << "Entrada invalida. Por favor, ingrese valores validos." << endl;
            continue;
        }

        int filas = fila - 'A';
        int asientos = numAsiento - 1;

        if (sala[filas][asientos] == '-') {
            sala[filas][asientos] = '+';
        } else {
            sala[filas][asientos] = '-';
        }
    }

    return 0;
}
