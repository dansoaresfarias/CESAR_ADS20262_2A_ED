#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("\tEste é o número %d.\n\n \a", 5);
    
    system("pause");
    return 0;
}