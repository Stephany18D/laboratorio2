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
//∙ ¿Cuál es su dirección en memoria?
    // La direccion en memoria es @0x70fdc0
//¿Cuántos bytes se dedican para almacenar  cada elemento de array?
    // Cada elemento de array ocupan 4 bytes
//∙ ¿Cuál es la dirección y el contenido en memoria del elemento array [3]?
    //La direccion y el contenido en memoria del elemento array [3] es 0 x 401580.
//∙ Describe el efecto que tiene la función fun_b, sobre el arreglo array.
    //La función fun_b invierte el orden de los elementos del arreglo array. Para poder lograr esto, se hace lo siguiente:
    //- Se crea un puntero b que apunta al inicio del arreglo array.
    //- Se recorre el arreglo desde los extremos hacia adentro utilizando un bucle for.
    //- Y en cada iteración del bucle, llama a la función fun_a para intercambiar los valores de los elementos que se encuentran en los índices f e i.
