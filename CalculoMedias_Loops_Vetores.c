#include <stdio.h>

#define M 3

int main (){

    float notas_lab [M], notas_pci[M]; // declara��o dos dois vetores
    float media_lab, soma_lab=0 ; // variaveis que guardam o valor da media e da soma de lab
    float media_pci, soma_pci=0; // variaveis que guardam o valor da media e da soma de pcI
    int i; // contador

    for (i=0; i<=M-1; i++) { // for externo que faz a repeti��o solicitando as notas para o usuario

        do{
            printf("Digite a %da nota de 'Laboratorio de PCI':",i+1); // i+1 para que o indice do printf come�e em 1� nota e nao 0� nota
            scanf("%f", &notas_lab[i]); // salva a nota no vetor notas_lab na posi��o i
        }
        while(notas_lab[i]<0 || notas_lab[i]>100); // nota na posi��o i tem que ser entre 0 e 100
        soma_lab = soma_lab + notas_lab[i]; // soma vai ser a soma ja feita + a nota na posi��o I = acumula a soma a cada itera��o

        do{
            printf("Digite a %da nota de 'PCI':",i+1);
            scanf("%f", &notas_pci[i]);
        }
        while(notas_pci[i]<0 || notas_pci[i]>100);
        soma_pci = soma_pci + notas_pci[i];

    }
    printf("----------------------------------------------------------------"); // bloco que imprime as medias na tela
    printf("M�dias:");
        media_lab = soma_lab/M;
    printf("\nA media da disciplina 'Laboratorio de PCI' eh: %.2f \n", media_lab);
    media_pci = soma_pci/M;
    printf("\nA media da disciplina 'PCI' eh: %.2f \n", media_pci);

    printf("----------------------------------------------------------------");// bloco que imporime quais notas sao maiores ou iguais a media
    printf("\n");
    printf("Informando quais notas sao maiores e iguais a media:\n");

    for (i=0; i<=M-1; i++){ // usando operadores relacionais
        if (notas_lab[i] >= media_lab)
            printf("\nA nota %.2f de 'Laboratorio de PCI' eh maior ou igual a media da disciplina.\n", notas_lab[i]);

        if (notas_pci[i] >= media_pci)
            printf("\nA nota %.2f de 'PCI' � maior ou igual a media da disciplina.\n", notas_pci[i]);
    }
}
