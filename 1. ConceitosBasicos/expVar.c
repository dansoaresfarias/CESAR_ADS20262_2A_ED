#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1, num2;

    num1 = 44;
    num2 = num1 + 23;

    printf("O valor de num1 é: %d\n", num1);
    printf("O valor de num2 é: %d\n", num2);
    
    system("pause");
    return 0;
}