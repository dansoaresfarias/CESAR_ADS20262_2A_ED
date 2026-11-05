#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "calcGeometricosDiretivas.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, lado, altura, comp, largura;
    char op, aux;

    do{        
        do{
            menu();
            op = getche();
            if(op < '1' || op > '8'){
                printf("\nOpção inválida! Digite uma opção válida.\n\n");
            }
        } while(op < '1' || op > '8');

        switch(op){
            case '1':
                printf("\nInforme o raio da Esfera: ");
                scanf("%f", &raio);
                printf("\nÁrea da Esfera = %.2f\n\n", AREA_ESFERA(raio));
                break;
            case '2':
                printf("\nInforme o raio da Esfera: ");
                scanf("%f", &raio);
                printf("\nVolume da Esfera = %.2f\n\n", VOLUME_ESFERA(raio));
                break;
            case '3':
                printf("\nInforme o raio do Cilíndro Regular: ");
                scanf("%f", &raio);
                printf("\nInforme a altura do Cilíndro Regular: ");
                scanf("%f", &altura);
                printf("\nÁrea do Cilíndro Regular = %.2f\n\n", AREA_CILINDRO_REG(raio, altura));
                break;
            case '4':
                printf("\nInforme o raio do Cilíndro Regular: ");
                scanf("%f", &raio);
                printf("\nInforme a altura do Cilíndro Regular: ");
                scanf("%f", &altura);
                printf("\nVolume da Cilíndro Regular = %.2f\n\n", VOLUME_CILINDRO_REG(raio, altura));
                break;
            case '5':
                printf("\nInforme o lado do Cubo: ");
                scanf("%f", &lado);
                printf("\nÁrea do Cubo = %.2f\n\n", AREA_CUBO(lado));
                break;
            case '6':
                printf("\nInforme o lado do Cubo: ");
                scanf("%f", &lado);
                printf("\nVolume do Cubo = %.2f\n\n", VOLUME_CUBO(lado));
                break;
            case '7':
                printf("\nInforme o largura do Paralelepipedo: ");
                scanf("%f", &largura);
                printf("\nInforme o comprimento do Paralelepipedo: ");
                scanf("%f", &comp);
                printf("\nInforme o altura do Paralelepipedo: ");
                scanf("%f", &altura);
                printf("\nÁrea do Paralelepipedo = %.2f\n\n", AREA_PARALELEPIPEDO(largura, comp, altura));
                break;
            case '8':
                printf("\nInforme o largura do Paralelepipedo: ");
                scanf("%f", &largura);
                printf("\nInforme o comprimento do Paralelepipedo: ");
                scanf("%f", &comp);
                printf("\nInforme o altura do Paralelepipedo: ");
                scanf("%f", &altura);
                printf("\nVolume do Paralelepipedo = %.2f\n\n", VOLUME_PARALELEPIPEDO(largura, comp, altura));
                break;
            default:
                printf("\nOpção inválida! Digite uma opção válida.\n\n");
                break;
        }
        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');

    return 0;
}