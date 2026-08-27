#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float n1, n2, n3, n4;
    /* Lê as 4 notas em uma chamada */
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    /* Calcula e imprime o resultado */
    printf("\nMédia: %.2f\n\n", (n1 + n2 + n3 + n4) / 4);

    system("pause");
    return 0;
}