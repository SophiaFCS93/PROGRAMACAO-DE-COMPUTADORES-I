#include <stdio.h>

int v; // UNICA VARIAVEL GLOBAL, pois � externa �s fun��es, inclusive � main
// V PODE SER ACESSADA DE QUALQUER LUGAR DENTRO DO C�DIGO.

// ABAIXO TEMOS TODAS AS FUN��ES DECLARADAS
void imprime_variavel_global(); //procedimento, nao retorna nada
void imprime_variavel_local_da_main(int); //procedimento, nao retorna nada
void imprime_variavel_local_da_funcao(int); //procedimento, nao retorna nada
void alteracao_de_parametro_dentro_da_funcao(int); //procedimento, nao retorna nada


int main(){

    int n; //vari�vel local, pois � interna � main()
    printf("Impress�o vari�vel global v passada como argumento.\n");
    printf("Forne�a o valor de v (global): ");
    scanf("%d",&v); //leia o valor da vari�vel v global
    imprime_variavel_global();
    printf("-----------------------------------------------\n");

    printf("Vari�vel local n da main como argumento.\n");
    printf("Forne�a o valor de n (local � main): ");
    scanf("%d",&n); //leia o valor da vari�vel n local
    imprime_variavel_local_da_main(n);
    printf("------------------------------------------------\n");

    imprime_variavel_local_da_funcao(n);
    printf("------------------------------------------------\n");
    alteracao_de_parametro_dentro_da_funcao(n);
    printf("Valor de n na main: %d.\n",n); //altera��o de n na fun��o n�o afetou n de main
}

void imprime_variavel_global(){
    printf("Valor da vari�vel global: %d.\n",v);
    // imprime o valor da variave global V
}
void imprime_variavel_local_da_main(int n){
    printf("Valor da vari�vel local da main: %d.\n",n);
    // imprime o valor da variave local n que foi declarada na main

}
void imprime_variavel_local_da_funcao(int n){
    int i=n; //i � vari�vel local da fun��o
    printf("Valor da vari�vel local da fun��o: %d.\n",i);
    // cria a variavel i que passa a ter o mesmo valor da variavel n da main
}
void alteracao_de_parametro_dentro_da_funcao(int n){
    printf("Valor inicial de n dentro da fun��o: %d.\n",n);
    n = 0;
    printf("Valor final de n dentro da fun��o: %d.\n",n);
    // altera o valor da variavel n dentro da fun��o
    // a variavel n desta fun��o � uma c�pia de n que s� existe dentro dessa fun��o (...)
    // (...) e que n�o � capaz de alterar a variavel n ooriginal (a que est� na main).
    // caso quis�ssemos que o valor de n fosse alterado da main para zero (...)
    //(...) ter�amos que usar o comando return n e alterar a main para receber o novo valor.

}

