#include <stdio.h>
/*2) imprimir um único asterisco a cada iteração nas repetições usadas.*/

void linha5 (){
    int i;

    for (i=1; i<=5; i++) // imprime uma unica linha com 5 asteriscos
        printf("*");
    printf("\n");
}

void linha10 (){
    int j;
    for (j=1; j<=10; j++) // imprime uma unica linha com 10 asteriscos
        printf("*");
    printf("\n");
}

int main (){
    linha5(); // chama a função linha5
    linha10(); // chama a função linha10
}


