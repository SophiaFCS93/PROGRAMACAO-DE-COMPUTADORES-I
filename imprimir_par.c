/*2) Imprimir somente os n�meros pares sem alterar o comando for */

#include<stdio.h>

int main () {

    // Altere o prog1.c para imprimir somente os n�meros pares.
    //Nesse caso, sem alterar o comando for

    int num;

    for (num = 1; num <= 1000; num++)
        if (num%2==0){
        printf ("% d, ", num);
    }
    printf("\n");
}
