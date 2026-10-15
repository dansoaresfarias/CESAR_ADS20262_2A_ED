#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int j = 1; j <= 10 ; j++){
        printf("\n.:: Tabuada do %d ::. \n", j);

        for(int i = 1; i <= 10; i++){
            printf("%2d x %2d = %2d\n", j, i, j * i);
        }
    }

    system("pause");
    return 0;
}