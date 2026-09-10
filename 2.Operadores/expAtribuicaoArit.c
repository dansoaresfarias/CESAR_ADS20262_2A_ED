#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i = 1, x = 5, t = 10, p = 15, d = 20, y = 2;
    // Sintaxe e Equivalência:
    i += 2;     /* i = i + 2; */
    x *= y + 1; /* x = x * (y + 1); */
    t /= 2.5;   /* t = t / 2.5; */
    p %= 5;     /* p = p % 5; */
    d -= 3;     /* d = d - 3; */

    printf("i = %d\n", i);
    printf("x = %d\n", x); 
    printf("t = %d\n", t);
    printf("p = %d\n", p);
    printf("d = %d\n", d);

    system("pause");
    return 0;
}