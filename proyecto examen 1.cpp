#include <stdio.h>

int main() {
    int contador;
    printf("Escribe un n�mero para comenzar a contar: ");
    scanf("%d", &contador);
    
    int limite = contador + 10; 
    
    while (contador <= limite) { 
        printf("%d\n", contador);
        contador++;
    }
    
    return 0;
}
