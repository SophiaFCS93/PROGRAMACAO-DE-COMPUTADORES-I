#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Informe o valor da primeira vari�vel\n");
    scanf("%d",&x);
    printf("Informe o valor da segunda\n");
    scanf("%d",&y);

    if (x==y)
        printf ("Valores iguais\n");
    else
        printf("Valores diferentes\n");

    printf("Fim do programa. Instru��o fora do if/else.\n");
}
