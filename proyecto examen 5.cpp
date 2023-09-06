#include <stdio.h>
//jose miguel ruiz marquez, 180200
//programa que obtiene los impares de una lista de numeros
int main() {
    int numero;
    int contador = 0;
    int pares = 0;
    int impares = 0;

    printf("escribe 10 numeros:\n");

    while (contador<10) {
        printf("numero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero%2 == 0) 
		{
            printf("es par\n");
            pares++;
        } 
		else 
		{
            printf("es impar\n");
            impares++;
        }
        
        contador++;
    }

    printf("total de numeros pares: %d\n", pares);
    printf("total de numeros impares: %d\n", impares);

    return 0;
}
