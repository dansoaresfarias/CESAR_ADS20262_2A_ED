#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    
    float num1, num2;
    char op, aux;

    do{
        system("cls");
        printf(".:: Calculadora ::.\n");

        printf("Digite um numero, o operador e o outro numero: (5 + 3) \n");
        scanf("%f %c %f", &num1, &op, &num2);

        switch (op) {
            case '+':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if(num2 != 0){
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else{
                    printf("Erro: Divisao por zero!\n");
                }
                break;
            default:
                printf("Operador invalido!\n");
                break;
        }

        printf("Deseja executar esse programa novamente? (S/N): ");
        aux = getche(); // Limpa o buffer do teclado
    }while(aux == 'S' || aux == 's');

    system("pause");
    return 0;
}
