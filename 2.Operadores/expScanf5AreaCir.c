#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const double PI = 3.141592;
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);
    printf("\nArea: %.2lf\n\n", PI * raio * raio);

    system("pause");
    return 0;
}