#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");
    int linha, coluna;

    for(linha = 1; linha <= 8 ; linha++){
        for(coluna = 1; coluna <= 8 ; coluna++){
            (linha == coluna)  || (linha + coluna == 9) ? 
                printf("\xdb\xdb") : printf("  ");
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
