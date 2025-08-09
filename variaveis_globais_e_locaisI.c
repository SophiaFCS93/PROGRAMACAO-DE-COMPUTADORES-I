#include <stdio.h>

int v; // UNICA VARIAVEL GLOBAL, pois é externa às funções, inclusive à main
// V PODE SER ACESSADA DE QUALQUER LUGAR DENTRO DO CÓDIGO.

// ABAIXO TEMOS TODAS AS FUNÇÕES DECLARADAS
void imprime_variavel_global(); //procedimento, nao retorna nada
void imprime_variavel_local_da_main(int); //procedimento, nao retorna nada
void imprime_variavel_local_da_funcao(int); //procedimento, nao retorna nada
void alteracao_de_parametro_dentro_da_funcao(int); //procedimento, nao retorna nada


int main(){

    int n; //variável local, pois é interna à main()
    printf("Impressão variável global v passada como argumento.\n");
    printf("Forneça o valor de v (global): ");
    scanf("%d",&v); //leia o valor da variável v global
    imprime_variavel_global();
    printf("-----------------------------------------------\n");

    printf("Variável local n da main como argumento.\n");
    printf("Forneça o valor de n (local à main): ");
    scanf("%d",&n); //leia o valor da variável n local
    imprime_variavel_local_da_main(n);
    printf("------------------------------------------------\n");

    imprime_variavel_local_da_funcao(n);
    printf("------------------------------------------------\n");
    alteracao_de_parametro_dentro_da_funcao(n);
    printf("Valor de n na main: %d.\n",n); //alteração de n na função não afetou n de main
}

void imprime_variavel_global(){
    printf("Valor da variável global: %d.\n",v);
    // imprime o valor da variave global V
}
void imprime_variavel_local_da_main(int n){
    printf("Valor da variável local da main: %d.\n",n);
    // imprime o valor da variave local n que foi declarada na main

}
void imprime_variavel_local_da_funcao(int n){
    int i=n; //i é variável local da função
    printf("Valor da variável local da função: %d.\n",i);
    // cria a variavel i que passa a ter o mesmo valor da variavel n da main
}
void alteracao_de_parametro_dentro_da_funcao(int n){
    printf("Valor inicial de n dentro da função: %d.\n",n);
    n = 0;
    printf("Valor final de n dentro da função: %d.\n",n);
    // altera o valor da variavel n dentro da função
    // a variavel n desta função é uma cópia de n que só existe dentro dessa função (...)
    // (...) e que não é capaz de alterar a variavel n ooriginal (a que está na main).
    // caso quiséssemos que o valor de n fosse alterado da main para zero (...)
    //(...) teríamos que usar o comando return n e alterar a main para receber o novo valor.

}

