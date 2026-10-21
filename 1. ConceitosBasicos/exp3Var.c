#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int lapis = 45, borrachas = 2345, canetas = 420, cadernos = 8, fitas = 13050;

    printf("Lápis:     %12d\n", lapis);
    printf("Borrachas: %12d\n", borrachas);
    printf("Canetas:   %12d\n", canetas);
    printf("Cadernos:  %12d\n", cadernos);
    printf("Fitas:     %12d\n", fitas);

    system("pause");
    return 0;
}