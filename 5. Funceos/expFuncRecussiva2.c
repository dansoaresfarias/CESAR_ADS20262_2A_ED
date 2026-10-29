#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int calcMDC(int numMaior, int numMenor){
    if(numMaior%numMenor == 0){
        return numMenor;
    }else {
        return calcMDC(numMenor, numMaior%numMenor);
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numMaior, numMenor;
    char aux;

    do{ 
        system("cls");
        printf(".:: Programa Cálculo Euclidiano ::.\n\n");

        printf("Informe um inteiro positivo para o Número Maior: ");
        scanf("%d", &numMaior);
        printf("\nInforme um inteiro positivo para o Número Menor: ");
        scanf("%d", &numMenor);

        printf("\nMDC(%d,%d) = %d\n\n", numMaior, numMenor, calcMDC(numMaior, numMenor));
        
        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');

    system("PAUSE");
    return 0;
}