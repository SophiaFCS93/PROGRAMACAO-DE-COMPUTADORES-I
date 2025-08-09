#include <stdio.h>
/*
- Criar um programa para ler n notas de Lab. PC I e PC I. ---------------------------------------------------------------- ok
- n é uma variável inteira que deve ser fornecida pelo teclado. ---------------------------------------------------------- ok
- As notas devem ser de 0 a 100. Use uma repetição para garantir que cada nota está entre 0 a 100 (use do while()). ------ ok
- Uma repetição externa, com for, por exemplo, deve controlar a n notas de cada disciplina.------------------------------- ok
- Ao final, apresente a média de cada disciplina. Gere o programa exer5_prog1.c. ----------------------------------------- ok para lab
- Não utilize vetores ou matrizes, pois os usaremos nas próximas questões. ----------------------------------------------- ok
*/

int main (){

    int n; // variavel para a quantidade de notas. É inteira e é fornecida pelo teclado
    int i; // variavel que é um contador
    float notas_lab, media_lab, soma_lab=0 ; //variaveis que guardam o valor de cada nota inserida de lab, a media e a soma
    float notas_pci, media_pci, soma_pci=0; // variavel que guardará o valor de cada nota inserida de pcI, a media e a soma

    printf("\nDigite a quantidade de notas a serem inseridas: ");
    scanf("%d", &n);
    printf("\n");

    for (i=1; i<=n; i++) { // repetição externa tendo 'n' como a variavel de controle ou LIMITE da repetição

        do{
            printf("Digite a %da nota de 'Laboratorio de PCI':",i);
            scanf("%f", &notas_lab);
        }
        while(notas_lab<0 || notas_lab>100); // as notas devem ser maior que zero e menor e igual a que 100
        //dessa forma o prog nao aceita numeros negativos e nem maiores que 100
        //ao inves de parar o prog, quando uma nota fora do intervalo é digitada, repete-se a linha até que a nota seja adequada
        soma_lab = soma_lab+notas_lab; // a soma tem que ficar entro do for para que os valores não sejam perdidos


        do{
            printf("Digite a %da nota de 'PCI':",i);
            scanf("%f", &notas_pci);
        }
        while(notas_pci<0 || notas_pci>100); // as notas devem ser maior que zero e menor e igual a que 100
        soma_pci = soma_pci+notas_pci;

    } // aqui encerra-se a repetição(for)

    media_lab =soma_lab/n;
    printf("\nA media da disciplina 'Laboratorio de PCI' eh: %.2f \n", media_lab);

    media_pci = soma_pci/n;
    printf("\nA media da disciplina 'PCI' eh: %.2f \n", media_pci);

    // o calculo da media e a impressão de seu valor na tela tem que ser declarado após o for
    //caso contrário, é chamado de "media" o valor da nota/3.

}


