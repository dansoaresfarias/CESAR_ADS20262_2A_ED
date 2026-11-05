#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int calcFatorial(int n){
    if(n == 1){
        return 1;
    }else {
        return n * calcFatorial(n-1);
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    char aux;

    do{ 
        system("cls");
        printf(".:: Programa Cálculo Fatorial ::.\n\n");

        do{
            printf("Informe um inteiro maior do que zero: ");
            scanf("%d", &num);
        }while(num <= 0);

        printf("\n%d! = %d\n\n", num, calcFatorial(num));
        
        printf("Deseja executar esse programa novamente? (s/n): ");
        aux = getche();
    } while(aux == 's' || aux == 'S');

    system("PAUSE");
    return 0;
}