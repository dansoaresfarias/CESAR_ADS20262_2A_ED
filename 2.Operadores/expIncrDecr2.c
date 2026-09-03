#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n = 5, x;
    // Pré-incremento: incrementa, depois avalia
    x = ++n; /* n se torna 6, x recebe 6 */
    printf("N=%d X=%d\n", n, x);
    // Pós-incremento: avalia, depois incrementa
    n = 5;
    x = n++; /* x recebe 5, n se torna 6 */
    printf("N=%d X=%d\n", n, x);

    system("pause");
    return 0;
}