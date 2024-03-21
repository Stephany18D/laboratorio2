#include <iostream>

using namespace std;

int p14() {
    const int filas = 5;
    const int columnas = 5;
    int matriz[filas][columnas];
    int numero = 1;

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = numero++;
        }
    }

    cout << "Matriz Original:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Rotada 90 grados:" << endl;
    for (int j = 0; j < columnas; ++j) {
        for (int i = filas - 1; i >= 0; --i) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Rotada 180 grados:" << endl;
    for (int i = filas - 1; i >= 0; --i) {
        for (int j = columnas - 1; j >= 0; --j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Rotada 270 grados:" << endl;
    for (int j = columnas - 1; j >= 0; --j) {
        for (int i = 0; i < filas; ++i) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
