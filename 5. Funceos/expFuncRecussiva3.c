#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int calcFibonacci(int num){
    if(num == 0){
        return 0;
    } else if(num == 1){
        return 1;
    } else {
        return calcFibonacci(num - 1) + calcFibonacci(num - 2);
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    char aux;

    do{ 
        system("cls");
        printf(".:: Programa Cálculo de Fibonacci ::.\n\n");

        do{
            printf("Digite um número inteiro positivo, até no máximo 46: ");
            scanf("%d", &num);
            if(num < 0){
                printf("\nNúmero inválido! Digite um número inteiro positivo.\n\n");
            } else if(num > 46){
                printf("\nNúmero inválido! Digite um número inteiro positivo, até no máximo 46.\n\n");
            }
        } while((num < 0 || num > 46));
        
        printf("\nFibonacci(%d) = %d\n\n", num, calcFibonacci(num));
        
        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');

    system("PAUSE");
    return 0;
}