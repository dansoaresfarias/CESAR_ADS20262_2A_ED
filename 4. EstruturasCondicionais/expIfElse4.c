#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char ch;
    int cont = 0;
    printf("Digite uma frase:\n");
    while ((ch = getche()) != '\r')    {
        if (ch == '0')        {
            printf("\nZERO detectado\n");
            cont++;
        }
    }

    cont ? printf("\nVocê digitou %d zeros.\n", cont) : printf("\nVocê não digitou nenhum zero.\n");

    /*
    if (cont > 0)
        printf("Você digitou %d zeros.\n", cont);
    else
        printf("Você não digitou nenhum zero.\n");
    */
    return 0;
}
