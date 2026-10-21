#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float tempF;
    
    printf("Informe a temperatura em °F: ");
    scanf("%f", &tempF);

    printf("\n\n%.2f°F => %.2f°C\n\n", tempF, (tempF - 32) * 5.0/9.0);

    system("pause");
    return 0;
}