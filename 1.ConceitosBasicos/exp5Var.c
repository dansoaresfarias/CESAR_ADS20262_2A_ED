#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("\n%d", 65);
    printf("\n%o", 65);
    printf("\n%x", 65);
    printf("\n%c\n", 65);
    
    system("pause");
    return 0;
}