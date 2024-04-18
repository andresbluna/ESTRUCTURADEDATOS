#include <stdio.h>


int encontrarMaximo(int array[], int tamano) {
    int maximo = array[0];
    for (int i = 1; i < tamano; i++) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
    }
    
    return maximo;
}

int main() {
    int array[10] = {9, 8, 7, 6, 5, 15, 4, 3, 2, 1};
    int tamano = sizeof(array) / sizeof(array[0]);

    int maximo = encontrarMaximo(array, tamano);

    printf("El numero mas grande en el array es: %d\n", maximo);

    return 0;
}
