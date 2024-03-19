#include <iostream>
#include <vector>
using namespace std;

bool cuadro(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    int sumaP = 0, sumaS = 0;

    for (int i = 0; i < n; i++) {
        sumaP += matriz[i][i];
        sumaS += matriz[i][n - 1 - i];
    }

    if (sumaP != sumaS) {
        return false;
    }

    for (int i = 0; i < n; i++) {
        int sumaFila = 0, sumaColumna = 0;
        for (int j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
            sumaColumna += matriz[j][i];
        }

        if (sumaFila != sumaColumna || sumaFila != sumaP) {
            return false;
        }
    }

    return true;
}

int p12() {
    int n;
    cout << "Ingrese el tamano de la matriz: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n));

    cout << "Ingrese los numeros de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz ingresada:" << endl;
    for (const vector<int>& fila : matriz) {
        for (int valor : fila) {
            cout << valor << " ";
        }
        cout << endl;
    }

    if (cuadro(matriz)) {
        cout << "\nLa matriz es un cuadrado magico" << endl;
    } else {
        cout << "\nLa matriz no es un cuadrado magico." << endl;
    }

    return 0;
}
