#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i = 3, n;
    n = i * (i + 1) + (++i);
    printf("\n i = %d | n = %d\n\n", i, n);

    system("pause");
    return 0;
}