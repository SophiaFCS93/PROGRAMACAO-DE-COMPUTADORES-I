
/*Imprimir somente os n�meros pares alterando o comando for.*/

#include<stdio.h>

int main () {
    // Altere o prog1.c para imprimir somente os n�meros pares.
    // Nesse caso alterando o comando for

    int num;

    for (num = 0; num <= 1000; num = num+2)
        printf ("%d, ", num);
        printf("\n");
}
