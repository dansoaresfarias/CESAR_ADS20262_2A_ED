#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 0; i < 20; i++){
        printf("%c ", '*');
    }

    // Erro - O contador i não é mais visível aqui, pois foi declarado dentro do for.
    printf("\n%d\n", i);
    
    system("pause");
    return 0;
}