#include <iostream>
using namespace std;
/// codigo malo:
//void fun_c(double *a, int n, double *promedio, double*suma){
//    int i;
//    suma = 0.0;
//    for (i = 0; i < n; i++)
//        suma += (a + i);
//    promedio = suma/n;

//}
///codigo arreglado:

void fun_c(double *a, int n, double *promedio, double *suma) {
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
        *suma += a[i];
    *promedio = (*suma) / n;
}

int ejerci2() {
    double arreglo[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double promedio, suma;

    fun_c(arreglo, 5, &promedio, &suma);

    printf("La suma es: %.2f\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
