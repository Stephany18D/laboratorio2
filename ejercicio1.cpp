#include <iostream>

using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int ejercicio1() {

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);
    return 0;
}

void fun_a(int *px, int *py) {
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam) {

    int f, i;
    int *b = a;

    for (f = 0, i = tam - 1; f < i; f++, i--) {
        fun_a(&b[f], &b[i]);
    }
}
