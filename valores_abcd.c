/*Escreva e teste um programa para ler valores das vari�veis apresentadas nas opera��es abaixo e que imprima os resultados das opera��es: a + ++b; c + d++;
Pelo teclado, forne�a o mesmo valor para a e c, assim com o mesmo valor para b e d, mas diferente do valor de a e c.
Explique os valores obtidos nas opera��es e cada uma delas.*/


#include <stdio.h>

int main () {

    int a,b,c,d; // variaveis

    printf(" Digite o valor de a: ");
    scanf("%d", &a);
    printf(" Digite o valor de b: ");
    scanf("%d", &b);
    printf(" Digite o valor de c: ");
    scanf("%d", &c);
    printf(" Digite o valor de d: ");
    scanf("%d", &d);

    printf("\n O resultado de %d + ++%d eh: %d \n", a, b, a + ++b);
    printf("\n O resultado de %d + %d++ eh: %d \n", a, b, c + d++);

}
