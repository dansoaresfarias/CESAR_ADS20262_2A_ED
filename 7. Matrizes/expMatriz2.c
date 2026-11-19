#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, diagPrincipal = 0, diagSecundaria = 0;
    char ch;
    

    do {
        system("cls");

        diagPrincipal = 0;
        diagSecundaria = 0;

        printf(".:: Programa de Cálculo Diagonais de uma Matriz Quadrada ::.\n\n");
        do{
            printf("Digite a ordem da matriz quadrada (n x n): ");
            scanf("%d", &n);
        } while(n < 1 || n > 10);


        int matriz[n][n];

        printf("\n");
        for(int l = 0; l < n; l++){
            for(int c = 0; c < n; c++){
                printf("\nDigite o elemento [%d][%d]: ", l + 1, c + 1);
                scanf("%d", &matriz[l][c]);
            }
        }

        for(int l = 0; l < n ; l++){
            for(int c = 0; c < n; c++){
                printf("%d\t", matriz[l][c]);
                if(l == c){
                    diagPrincipal += matriz[l][c];
                }
                if(l + c == n - 1){
                    diagSecundaria += matriz[l][c];
                }
            }
            printf("\n");
        }

        printf("\nSoma da diagonal principal: %d", diagPrincipal);
        printf("\nSoma da diagonal secundária: %d", diagSecundaria);

        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}