/*
 * Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
 * que são múltiplos de 3 ou 5.
 */

#include <stdio.h>
#define TAM 1000

int main(){
    int soma = 0 ;
    for(int t = 1 ; t < TAM ; t++ ){
        if(t % 5  == 0){
            printf("%d ",t);
            soma += t ; 
        }
    }
    printf("\n");
    printf("a soma e %d ",soma);
    return 0;
}
