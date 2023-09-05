#include <stdio.h>
//Programa que imprime 10 numeros
//Jose Miguel Ruiz Marquez, 180200
int main() {
    int contador;
    printf("Escribe un número para comenzar a contar\n");
    scanf("%d", &contador);
    
    int limite = contador + 10; 
    
    while (contador <= limite) { 
        printf("%d\n", contador);
        contador++;
    }
    
    return 0;
}
