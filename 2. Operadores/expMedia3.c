#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota, media = 0.0;
    
    for(int i = 1; i <= 4; i++){
        printf("Digite a %dª nota: ", i);
        scanf("%f", &nota);
        media += nota;
    }

    printf("A média das notas é: %.2f\n", media /= 4.0);

    system("pause");
    return 0;
}