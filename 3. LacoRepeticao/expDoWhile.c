#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    char ch;

    do {
        system("cls");

        num = -1;

        while (num < 1 || num > 10){
            printf("\nDigite um número inteiro de 1 a 10: ");
            scanf("%d", &num);
        }

        printf("\n.:: Tabuada do %d ::. \n\n", num);

        for (int i = 1; i <= 10; i++){
            printf("%2d x %2d = %2d\n", num, i, num * i);
        }
        printf("Deseja repetir o programa? (s-sim | n-não): ");
        ch = getche();
    } while (ch == 's' || ch == 'S');

    system("pause");
    return 0;
}