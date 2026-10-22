#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "tempCF.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float tempC, tempF;
    
    printf("Informe a temperatura em °C: ");
    scanf("%f", &tempC);

    tempF = celsiusParaFahrenheit(tempC);

    printf("\n%.2f°C => %.2f°F\n\n", tempC, tempF);
    
    system("pause");
    return 0;
}