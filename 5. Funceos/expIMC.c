#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "expIMC.h"

#undef MAGREZA
#define MAGREZA 18.3

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float massa, altura, imc;
    char aux;
    
    do{  
        system("cls");  
        printf(".:: Programa de cálculo de IMC ::.\n\n");
        printf("Digite a sua massa (em kg): ");
        scanf("%f", &massa);
        printf("Digite a sua altura (em metros): ");
        scanf("%f", &altura);

        imc = IMC(massa, altura);
        printf("\nO seu IMC é: %.2f\n", imc);

        if(imc < MAGREZA){
            printf("Classificação: Magreza\n");
        } else if(imc <= NORMAL){
            printf("Classificação: Normal\n");
        } else if(imc <= SOBREPESO){
            printf("Classificação: Sobrepeso\n");
        } else if(imc <= OBESOI){
            printf("Classificação: Obesidade I\n");
        } else if(imc <= OBESOII){
            printf("Classificação: Obesidade II\n");
        } else {
            printf("Classificação: Obesidade III\n");
        }

        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');
    
    system("pause");
    return 0;
}