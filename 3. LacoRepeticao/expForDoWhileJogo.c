#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char resp, secreto;
    int tentativas;

    do{
        system("cls");
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\nDigite uma letra (a-z):\n");
        while ((resp = getche()) != secreto)
        {
            printf("\nIncorreto. Tente de novo!\n");
            tentativas++;
        }
        printf("\nCorreto em %d tentativas!\n", tentativas);
        printf("\nJogar novamente? (s/n): ");
    } while (getche() == 's');
    return 0;
}
