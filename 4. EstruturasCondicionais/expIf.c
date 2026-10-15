#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Você é maior de idade.\n");
    } 
    
    return 0;
}
