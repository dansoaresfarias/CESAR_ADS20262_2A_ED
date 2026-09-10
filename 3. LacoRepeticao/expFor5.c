#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = -1;

    while (num < 0 || num > 10){
        printf("Digite um número inteiro de 1 a 10: ");
        scanf("%d", &num);
    }

    printf(".:: Tabuada do %d ::. \n\n", num);

    for (int i = 1; i <= 10; i++){
        printf("%2d x %2d = %2d\n", num, i, num * i);
    }

    system("pause");
    return 0;
}