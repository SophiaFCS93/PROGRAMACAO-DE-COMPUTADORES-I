/*Rescreva e teste o programa anterior (soma notas) para que os números sejam impressos com 8 posições, sendo 2 para os decimais.
Os valores inteiros devem ser impressos com 4 algarismos, sendo preenchidos com zeros à esquerda para completar os 4 algarismos.
Exemplo: se o número for 20, deve ser impresso 0020. Recomenda-se utilizar variáveis inteiras e decimais para a soma e a média.*/
#include <stdio.h>

int main () {

    float nota1, nota2, nota3,nota4, media, soma;
    int soma_valor_inteiro, media_valor_inteiro;

    printf(" \nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf(" \nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf(" \nDigite a nota 3: ");
    scanf("%f", &nota3);
    printf(" \nDigite a nota 4: ");
    scanf("%f", &nota4);

    soma = nota1+nota2+nota3+nota4; // soma de todas as entradas
    media = soma/4;  // media é a soma dividido pela quantidade

    soma_valor_inteiro = nota1+nota2+nota3+nota4;
    media_valor_inteiro = soma/4;


    printf(" \nA soma das notas eh: %08.2f\n", soma);    // decimais com 8 posições sendo duas decimais
    printf(" \nA media das notas eh: %08.2f\n", media);  // decimais com 8 posições sendo duas decimais
    printf(" \nA soma das notas sem casas decimais eh: %04d\n ",soma_valor_inteiro); // valores inteiros impressos com 4 algarismos, sendo os primeiros iguais a zero
    printf(" \nA media das notas sem casas decimais eh: %04d\n ", media_valor_inteiro);
    }
