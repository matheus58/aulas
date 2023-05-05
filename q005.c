/*
 Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
 */

#include <stdio.h>

int main(){
    int numero  = 0 ;
    int divisores ;

    printf("digite um numero :");
    scanf("%d",&numero);

    printf("divisores de %d sao:",numero);

    for(int t = 1 ; t < numero+1; t++){

        if(numero % t == 0){
            printf("%d ",t);
        }
    }
    printf("\n");
    return 0 ;
}
