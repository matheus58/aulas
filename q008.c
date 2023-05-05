/*
 Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido
 */

#include <stdio.h>

int main(){
    int n = 0 ;
    int maior = 0;
    int  menor = 1;

    do {
        printf("digite um numero :\n");
        scanf("%d",&n);
        if(n > maior){
            maior = n ;
        }
        if (n < menor){
            menor = n;
        }
    }while(n > 0);
        
    printf(" A maior nota eh :%d \n",maior);
    printf(" A menor nota eh :%d \n ",menor);
    return 0;
}
