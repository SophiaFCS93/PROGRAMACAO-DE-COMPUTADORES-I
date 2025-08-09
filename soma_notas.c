/* Enunciado: Escreva e teste um programa que some quatro notas de PC I. As notas devem ser obtidas pelo teclado.
O programa deve imprimir a soma e a média delas. A média deve ser impressa tanto sem decimas, bem com decimais.
As notas podem ter valores decimais. Decida corretamente os tipos das variáveis utilizadas.
Recomenda-se que cada variável seja lida (entrada de dados) separadamente*/

#include <stdio.h>

int main () {

    float nota1, nota2, nota3,nota4, media, soma;

    printf(" \nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf(" \nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf(" \nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf(" \nDigite a nota 4:  ");
    scanf("%f", &nota4);

    soma = nota1+nota2+nota3+nota4; // soma de todas as entradas
    media = soma/4; // media é a soma dividido pela quantidade


    printf(" \nA soma das notas eh: %.2f\n", soma);
    printf(" \nA media das notas eh: %.2f\n", media);
}
