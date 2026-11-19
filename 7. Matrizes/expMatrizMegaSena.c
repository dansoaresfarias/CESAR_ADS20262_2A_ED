#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char ch;
    

    do {
        system("cls");

        int jogo[6];

        printf(".:: Programa para Sortear os Seis Números da Mega-Sena ::.\n\n");
        
        for(int i = 0; i < 6; i++){
            int numero = rand() % 60 + 1;
            if(i > 0){
                for(int v = 0; v < i; v++){
                    if(numero == jogo[v]){
                        do{
                            numero = rand() % 60 + 1;
                        } while(numero == jogo[v]);
                    }
                }
            }
            jogo[i] = numero;
            printf("%d  ", numero);
        }

        printf("\n\n");
        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}