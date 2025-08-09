/*Imprime L linhas de N asteriscos, sendo 1<=L<=20 e 1<=N<=20.

L e N devem ser lidos pelo teclado.

Caso L e N estejam fora dos limites permitidos, o programa deve apresentar uma mensagem de erro
e não executar mais nada. Faça isso no programa de nome prog7.c.*/

//printf(" \nA quantidade de linhas eh %d e a quantidade de asteriscos eh %d.\n", L, N);

#include <stdio.h>
int main () {

    int L,N,qnt_asterisco,linhas; // L linhas e N asteriscos

    printf(" \nDigite a quantidade de linhas: ");
    scanf("%d", &L);
    printf(" \nDigite a quantidade de asteriscos: ");
    scanf("%d", &N);
    printf("\n");

    if ((L>=1 && L<=20) &&(N>=1 && N<=20))
        for (linhas=1; linhas<=L; linhas++) {
            for (qnt_asterisco=1; qnt_asterisco<=N; qnt_asterisco++)
                printf("*");
                printf("\n");
        }
    else
    printf(" \n Erro. Valores inválidos.");
}
