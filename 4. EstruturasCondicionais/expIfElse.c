#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16 && idade < 18){
        printf("Você pode votar.\n");
    } else if(idade >= 18 && idade < 70){
        printf("Você deve votar.\n");
    } else if (idade >= 70){
        printf("Você pode votar.\n");
    } else{
        printf("Você não pode votar.\n");
    }
    
    return 0;
}
