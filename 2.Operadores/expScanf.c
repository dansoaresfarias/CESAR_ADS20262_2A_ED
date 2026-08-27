#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    printf("a:%d, b:%d, c:%d\n\n", a, b, c);

    system("pause");
    return 0;
}