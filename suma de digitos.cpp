#include <stdio.h>
//programa que suma los digitos de un numero
//jose miguel ruiz marquez 180200
int main() {
    int numero, suma = 0;

    printf("escribe un numero:\n\a ");
    scanf("%d", &numero);

    printf("los digitos que se suman son:\a ");

    
    while (numero != 0) 
	{
        int digito = numero % 10; 
        suma += digito;           
        printf("%d ", digito);    
        numero /= 10;             
    }

    printf("\nla suma de digitos es: %d\n", suma);
    return 0;
}
