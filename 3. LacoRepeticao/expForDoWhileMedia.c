#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    float nota, media;
    char ch;

    do{
        system("cls");
        printf(".:: Programa para calcular o média de notas ::.\n\n");
        media = 0.0;
        qtdNotas = 0;

        do{
            printf("Informe a quantidade de notas que deseja calcular a média: ");
            scanf("%d", &qtdNotas);
        }while(qtdNotas <= 0 || qtdNotas > 5 );

        for (int i = 1 ; i <= qtdNotas ; i++) {
            printf("\nInforme a %dª nota: ", i);
            scanf("%f", &nota);
            media += nota;
        }
        
        printf("\nMédia das %d notas é %.2f \n", qtdNotas, media/qtdNotas);

        printf("Deseja repetir o código (s - sim | n - não):");
        ch = getche();
    } while (ch == 's' || ch =='S');

    system("pause");
    return 0;
}