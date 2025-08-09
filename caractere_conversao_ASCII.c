/* Escreva e teste um programa que leia do teclado um caractere e imprima o caractere propriamente digitado.
Imprima o seu respectivo valor na tabela ASCII. A partir desse valor na tabela, imprima o seu valor em octal e em hexadecimal.*/

#include <stdio.h>

int main (){

    char caractere;
    int i;

    printf("\nDigite um caractere: ");
    scanf ("%c", &caractere);
    printf("\nO caractere informado eh '%c' e tem o ASCII numero %d.\n", caractere, caractere);
    printf("\nEm octal o valor de '%c' eh %o.\n", caractere, caractere);
    printf("\nEm hexadecimal o valor de '%c' eh %x.\n", caractere,caractere);

}
