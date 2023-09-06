#include <stdio.h>
//programa que recibe positivos hasta encontrar el negativo
//jose miguel ruiz marquez, 180200
int main() {
    int numero;

    printf("Ingresa numeros positivos, o ingresa un numero negativo para finalizar:\n");
    printf("numero: ");
    scanf("%d", &numero);

    while (numero >= 0) 
	{
        printf("numero ingresado: %d\n", numero);
        printf("numero: ");
        scanf("%d", &numero);
    }

    printf("ingresaste un numero negativo, no se reciben\a");

    return 0;
}


