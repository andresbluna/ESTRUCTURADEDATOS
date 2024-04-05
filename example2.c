#include<stdio.h>
#include<stdbool.h>

int main() {
    int x;
    int y;
    int modulo = x && y % 2 == 0;

    printf("Ingrese un número entero: ");
    scanf("%d", & x);

    if(x<1){
        printf("El numero ingresado no es valido");
        }

    else if (modulo) {
        printf("El número es par.\n");
    } else {
        printf("El número es impar.\n");
    }

    return 0;

    
}

