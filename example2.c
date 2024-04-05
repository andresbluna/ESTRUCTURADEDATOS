#include<stdio.h>
#include<stdbool.h>

int main() {
    int x;
    int y;

    printf("Ingrese un número entero: ");
    scanf("%d", & x);

    if (x && y % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }

    return 0;
}

