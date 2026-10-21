#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;
    // Exemplos de Incremento:
    x = x + 1; /* Adiciona 1 a x */
    printf("Valor de x após incremento: %d\n", x);
    ++x;       /* Equivalente (Pré-incremento) */
    printf("Valor de x após incremento: %d\n", x);
    x++;       /* Equivalente (Pós-incremento) */
    printf("Valor de x após incremento: %d\n", x);
    // Exemplos de Decremento:
    x = x - 1; /* Decrementa 1 de x */
    printf("Valor de x após decremento: %d\n", x);
    --x;       /* Equivalente (Pré-decremento) */
    printf("Valor de x após decremento: %d\n", x);
    x--;       /* Equivalente (Pós-decremento) */
    printf("Valor de x após decremento: %d\n", x);
    
    system("pause");
    return 0;
}