#include <stdio.h>
/*
- Criar um programa para ler n notas de Lab. PC I e PC I. ---------------------------------------------------------------- ok
- n � uma vari�vel inteira que deve ser fornecida pelo teclado. ---------------------------------------------------------- ok
- As notas devem ser de 0 a 100. Use uma repeti��o para garantir que cada nota est� entre 0 a 100 (use do while()). ------ ok
- Uma repeti��o externa, com for, por exemplo, deve controlar a n notas de cada disciplina.------------------------------- ok
- Ao final, apresente a m�dia de cada disciplina. Gere o programa exer5_prog1.c. ----------------------------------------- ok para lab
- N�o utilize vetores ou matrizes, pois os usaremos nas pr�ximas quest�es. ----------------------------------------------- ok
*/

int main (){

    int n; // variavel para a quantidade de notas. � inteira e � fornecida pelo teclado
    int i; // variavel que � um contador
    float notas_lab, media_lab, soma_lab=0 ; //variaveis que guardam o valor de cada nota inserida de lab, a media e a soma
    float notas_pci, media_pci, soma_pci=0; // variavel que guardar� o valor de cada nota inserida de pcI, a media e a soma

    printf("\nDigite a quantidade de notas a serem inseridas: ");
    scanf("%d", &n);
    printf("\n");

    for (i=1; i<=n; i++) { // repeti��o externa tendo 'n' como a variavel de controle ou LIMITE da repeti��o

        do{
            printf("Digite a %da nota de 'Laboratorio de PCI':",i);
            scanf("%f", &notas_lab);
        }
        while(notas_lab<0 || notas_lab>100); // as notas devem ser maior que zero e menor e igual a que 100
        //dessa forma o prog nao aceita numeros negativos e nem maiores que 100
        //ao inves de parar o prog, quando uma nota fora do intervalo � digitada, repete-se a linha at� que a nota seja adequada
        soma_lab = soma_lab+notas_lab; // a soma tem que ficar entro do for para que os valores n�o sejam perdidos


        do{
            printf("Digite a %da nota de 'PCI':",i);
            scanf("%f", &notas_pci);
        }
        while(notas_pci<0 || notas_pci>100); // as notas devem ser maior que zero e menor e igual a que 100
        soma_pci = soma_pci+notas_pci;

    } // aqui encerra-se a repeti��o(for)

    media_lab =soma_lab/n;
    printf("\nA media da disciplina 'Laboratorio de PCI' eh: %.2f \n", media_lab);

    media_pci = soma_pci/n;
    printf("\nA media da disciplina 'PCI' eh: %.2f \n", media_pci);

    // o calculo da media e a impress�o de seu valor na tela tem que ser declarado ap�s o for
    //caso contr�rio, � chamado de "media" o valor da nota/3.

}


