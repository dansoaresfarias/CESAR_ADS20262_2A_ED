#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 5;
	printf("\n%d | %d | %d", --n, n+1, ++n);
    printf("\n%d\n", n);

    system("pause");
    return 0;
}