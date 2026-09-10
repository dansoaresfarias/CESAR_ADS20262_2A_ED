#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dia = 7, mes = 6;
    char op = 'S';
    // Avaliação das expressões lógicas:
    int e_valido = (dia == 7 && mes == 6);    // Retorna 1 (V)
    int op_valida = (op == 'S' || op == 's'); // Retorna 1 (V)
    int negacao = !(dia == 7);                // Retorna 0 (F)

    printf("e_valido: %d\n", e_valido);
    printf("op_valida: %d\n", op_valida);
    printf("negacao: %d\n", negacao);

    system("pause");
    return 0;
}