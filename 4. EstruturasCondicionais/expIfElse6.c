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

    printf("\n%d² = ", n);

    for(int i = 0 ; i < n ; i++){   
        if(i == n-1){
            printf("%d ", 2*i + 1);
        } else {
            printf("%d + ", 2*i + 1);
        } 
        result += (2*i + 1);
    }

    printf("= %d\n", result);
    
    return 0;
}
