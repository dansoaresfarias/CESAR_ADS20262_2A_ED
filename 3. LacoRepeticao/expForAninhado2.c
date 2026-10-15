#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int j = 1; j <= 5 ; j++){
        for(int i = 1; i <= 3; i+=2){
            printf("%2d  ", j + i);
        }
        printf("%2d\n", j);
    }

    system("pause");
    return 0;
}