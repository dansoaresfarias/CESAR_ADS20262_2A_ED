#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, result = 0;

    do{
        printf("\nDigite um número inteiro positivo: ");
        scanf("%d", &n);
    }while(n < 0);

    for(int i = 0 ; i < n ; i++){
        result += (2*i + 1);
    }

    printf("\n%d² : %d\n", n, result);
    
    return 0;
}
