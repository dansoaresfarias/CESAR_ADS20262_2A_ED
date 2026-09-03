#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int valorInt = 2000000000;
    int dez = 10;

    // Estouro de memória (overflow) ao multiplicar valorInt por dez
    valorInt = (valorInt * dez) / dez;

    printf("Valor de valorInt: %d\n", valorInt);

    system("pause");
    return 0;
}