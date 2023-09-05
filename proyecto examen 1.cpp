#include <stdio.h>

int main() {
    int contador;
    printf("Escribe un número para comenzar a contar: ");
    scanf("%d", &contador);
    
    int limite = contador + 10; 
    
    while (contador <= limite) { 
        printf("%d\n", contador);
        contador++;
    }
    
    return 0;
}
