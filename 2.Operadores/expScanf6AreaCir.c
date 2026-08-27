#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);
    printf("\nArea: %.2lf\n\n", M_PI * pow(raio,2));

    system("pause");
    return 0;
}