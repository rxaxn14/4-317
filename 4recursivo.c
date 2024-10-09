#include <stdio.h>

void calcular_pi_recursivo(int *n, int i, double *pi) {
    if (i < *n) {
        *pi += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1.0);
        calcular_pi_recursivo(n, i + 1, pi);
    }
}

int main() {
    int n;
    double pi = 0.0;

    printf("Ingrese el número de iteraciones: ");
    scanf("%d", &n);

    calcular_pi_recursivo(&n, 0, &pi);
    pi *= 4.0;
    printf("Valor aproximado de pi (recursivo): %.15f\n", pi);

    return 0;
}
