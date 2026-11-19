#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char nome[80];
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Saudações, %s.\n", nome);
    system("PAUSE");
    return 0;
}