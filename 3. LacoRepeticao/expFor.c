#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 0; i < 20; i++){
        printf("%c ", '*');
    }

    system("pause");
    return 0;
}