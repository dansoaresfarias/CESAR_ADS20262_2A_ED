#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a = 17, b = 5;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;
    int resto = a % b;
    int resto2 = b % a;
    int inverso = -a;

    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Subtração: %d - %d = %d\n", a, b, subtracao);
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);
    printf("Divisão: %d / %d = %d\n", a, b, divisao);
    printf("Resto: %d %% %d = %d\n", a, b, resto);
    printf("Resto: %d %% %d = %d\n", b, a, resto2);
    printf("Inverso: -%d = %d\n", a, inverso);

    system("pause");
    return 0;
}