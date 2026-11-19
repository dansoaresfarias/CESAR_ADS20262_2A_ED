#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char sdc[] = "Saudações!";

    printf("%s\n", sdc);

    printf("\n%c\n\n", sdc[12]);

    system("PAUSE");
    return 0;
}