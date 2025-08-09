/*2) Imprimir somente os números pares sem alterar o comando for */

#include<stdio.h>

int main () {

    // Altere o prog1.c para imprimir somente os números pares.
    //Nesse caso, sem alterar o comando for

    int num;

    for (num = 1; num <= 1000; num++)
        if (num%2==0){
        printf ("% d, ", num);
    }
    printf("\n");
}
