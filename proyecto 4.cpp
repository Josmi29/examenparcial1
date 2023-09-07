#include <stdio.h>
// Programa que suma N números enteros
// jose miguel ruiz marquez, 180200
int main() {
    int a, suma;

    printf("escribe un numero entero positivo a:\n ");
    scanf("%d", &a);
	printf("Usando la formula de Gauss: %d *(%d+1)/2 nos da que \n", a, a, a);
    while (a <= 0) 
	{
        printf("el numero debe ser entero y positivo: ");
        scanf("%d", &a);
    }
    
    suma = (a * (a + 1)) / 2;
    printf("la sumatoria de los %d numeros enteros es= %d\n", a, suma);

    return 0;
}

