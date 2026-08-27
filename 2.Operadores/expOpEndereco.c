#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 2;
    /* %p imprime o endereço da variável */
    printf("Valor = %d, end = %p\n", n, &n);

    system("pause");
    return 0;
}