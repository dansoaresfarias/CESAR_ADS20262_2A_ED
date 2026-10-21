#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int n, perda=0, ganho=0, resp;

    do{
        printf("Quantas vezes deseja jogar, informe um numero impar inteiro positivo: ");
        scanf("%d", &n);
        if(n <= 0 || n % 2 == 0){
            printf("\nNumero invalido, informe um numero impar inteiro positivo.\n");
        }
    }while(n <= 0 || n % 2 == 0);

    for(int i = 0; i < n; i++){
        printf("\n.:: Jogo %d de %d ::.\n", i+1, n);
        do{
            printf("Escolha 0 para cara ou 1 para coroa: ");
            scanf("%d", &resp);
            if(resp != 0 && resp != 1){
                printf("\nOpcao invalida, informe 0 para cara ou 1 para coroa.\n");
            }
        }while(resp != 0 && resp != 1);

        if(resp == rand() % 2){
            ganho++;
            printf(resp == 0 ? "Parabens! Voce ganhou com cara!\n" : "Parabens! Voce ganhou com coroa!\n");
        } else {
            perda++;
            printf(resp == 0 ? "Que pena! Voce perdeu com cara!\n" : "Que pena! Voce perdeu com coroa!\n");
        }
    }

    if(ganho > perda){
        printf("\nVoce ganhou %d vezes e perdeu %d vezes, parabens!\n", ganho, perda);
    } else{
        printf("\nVoce perdeu %d vezes e ganhou %d vezes, que pena!\n", perda, ganho);
    }
    
    system("pause");
    return 0;
}
