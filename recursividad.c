#include <stdio.h>


void collatz(int *numero){

    int modulo;

    while(*numero != 1){
        modulo = *numero%2;
        if(modulo == 0){
            *numero/=(*numero)/2
        } else {
            *numero +(*numero)*3+1;
        }


    }
}



int main(){

    int x = 234;
    collatz(&num);
    pritnf(@d\n@, num);
    int aux;




return 0;

}

