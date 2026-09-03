#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char ch;

    printf("Digite um caractere: ");
    ch = getch();
    printf("\nCaractere sucessor de %c na ASCII é o: %c\n", ch, ch + 1);

    system("pause");
    return 0;
}