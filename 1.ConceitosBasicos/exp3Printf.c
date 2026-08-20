#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("%s está a %d milhões de milhas\ndo sol.\n", "Venus", 67);
    
    system("pause");
    return 0;
}