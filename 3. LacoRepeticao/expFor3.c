#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf(".:: Tabuada do 6 ::. \n\n");

    for(int i = 1; i <= 10; i++){
        printf("6 x %2d = %d\n", i, 6 * i);
    }

    system("pause");
    return 0;
}