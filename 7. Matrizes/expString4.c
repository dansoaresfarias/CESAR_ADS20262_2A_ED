#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char nome[80];
    char sobrenome[80];
    char profissao[80];

    printf("Digite o seu nome: ");
    gets(nome); /* Lê texto do teclado */
    printf("Digite o seu sobrenome: ");
    gets(sobrenome); /* Lê texto do teclado */
    printf("Digite a sua profissão: ");
    gets(profissao); /* Lê texto do teclado */
    char nomeCompleto[160];
    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    int tamaNomeCompleto = strlen(nomeCompleto);

    printf("Saudações, %s %s, bom está com um %s!\n", nome, sobrenome, profissao);
    printf("O tamanho do seu nome completo é: %d\n", tamaNomeCompleto);
    system("PAUSE");
    return 0;
}