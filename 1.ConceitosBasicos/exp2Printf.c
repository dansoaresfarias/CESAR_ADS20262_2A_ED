#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Os alunos são %2d.\n", 350);
    printf("Os alunos são %4d.\n", 350);
    printf("Os alunos são %5d.\n", 350);
    
    system("pause");
    return 0;
}