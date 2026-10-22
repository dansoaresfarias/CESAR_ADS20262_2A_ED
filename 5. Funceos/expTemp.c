#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "convTemperatura.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float temp;
    char aux, op;
    
    do{        
        do{
            menu();
            scanf("%c", &op);
            if(op < '1' || op > '6'){
                printf("\nOpção inválida! Digite uma opção válida.\n\n");
            }
        } while(op < '1' || op > '6');

        switch(op){
            case '1':
                printf("\nInforme a temperatura em °C: ");
                scanf("%f", &temp);
                printf("\n%.2f°C => %.2f°F\n\n", temp, celsiusParaFahrenheit(temp));
                break;
            case '2':
                printf("\nInforme a temperatura em °F: ");
                scanf("%f", &temp);
                printf("\n%.2f°F => %.2f°C\n\n", temp, fahrenheitParaCelsius(temp));
                break;
            case '3':
                printf("\nInforme a temperatura em °C: ");
                scanf("%f", &temp);
                printf("\n%.2f°C => %.2fK\n\n", temp, celsiusParaKelvin(temp));
                break;
            case '4':
                printf("\nInforme a temperatura em K: ");
                scanf("%f", &temp);
                printf("\n%.2fK => %.2f°C\n\n", temp, kelvinParaCelsius(temp));
                break;
            case '5':
                printf("\nInforme a temperatura em °F: ");
                scanf("%f", &temp);
                printf("\n%.2f°F => %.2fK\n\n", temp, fahrenheitParaKelvin(temp));
                break;
            case '6':
                printf("\nInforme a temperatura em K: ");
                scanf("%f", &temp);
                printf("\n%.2fK => %.2f°F\n\n", temp, kelvinParaFahrenheit(temp));
                break;
            default:
                printf("\nOpção inválida! Digite uma opção válida.\n\n");
                break;
        }
        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');
    
    system("pause");
    return 0;
}