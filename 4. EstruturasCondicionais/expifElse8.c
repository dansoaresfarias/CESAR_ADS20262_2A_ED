#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");
    int linha, coluna;
    int n;

    do{
        printf("\nDigite um numero inteiro positivo maior que 2: ");
        scanf("%d", &n);
    }while(n < 3);

    for(linha = 1; linha <= n ; linha++){
        for(coluna = 1; coluna <= n ; coluna++){
            (linha + coluna) % 2 == 0 ? printf("\xdb\xdb") : printf("  ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
