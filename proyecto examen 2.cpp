#include <stdio.h>

int main() {
    int numero;

   
    printf("Ingresa un numero para su tabla de multiplicar:\n ");
    scanf("%d", &numero);

    printf("Tabla de multiplicar del %d\n", numero);

    int multiplicacion = 1;
    while (multiplicacion <= 10) {
        int resultado = numero * multiplicacion;
        printf("%d por %d = %d\n", numero, multiplicacion, resultado);
        multiplicacion++;
    }

    return 0;
}
