#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int verdadeiro = (15 < 20); // Retorna 1
    int falso = (15 == 20);     // Retorna 0
    printf("V: %d\n", verdadeiro);
    printf("F: %d\n", falso);
    return 0;
}