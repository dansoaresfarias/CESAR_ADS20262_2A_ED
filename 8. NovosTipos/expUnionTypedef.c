#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


typedef union {
    char nome[80];
    int idade;
    float nota[3];
    float media;
} Aluno;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");

    Aluno aluno1;
    printf("Digite o nome do aluno: ");
    gets(aluno1.nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);
    for(int i = 0; i < 3; i++){
        printf("Digite a nota %d do aluno: ", i + 1);
        scanf("%f", &aluno1.nota[i]);
    }

    aluno1.media = (aluno1.nota[0] + aluno1.nota[1] + aluno1.nota[2]) / 3;
    printf("\nNome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno1.nota[0], aluno1.nota[1], aluno1.nota[2]);
    printf("Média: %.2f\n", aluno1.media);

    system("PAUSE");
    return 0;
}