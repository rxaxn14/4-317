#include <stdio.h>

void calcular_pi_iterativo(int *n, double *pi) {
    *pi = 0.0;
    for (int i = 0; i < *n; i++) {
        *pi += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1.0);
    }
    *pi *= 4.0;
}

int main() {
    int n;
    double pi;

    printf("Ingrese el número de iteraciones: ");
    scanf("%d", &n);

    calcular_pi_iterativo(&n, &pi);
    printf("Valor aproximado de pi (iterativo): %.15f\n", pi);

    return 0;
}
