#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lapis = 4.875, borrachas = 234.542, canetas = 42.036, cadernos = 8.0, fitas = 13.05;
    
    printf("Lápis:     %12.2f\n", lapis);
    printf("Borrachas: %12.2f\n", borrachas);
    printf("Canetas:   %12.2f\n", canetas);
    printf("Cadernos:  %12.2f\n", cadernos);
    printf("Fitas:     %12.2f\n", fitas);

    system("pause");
    return 0;
}