/*
 Faça um programa que leia 10 inteiros e imprima sua média.
 */

#include <stdio.h>

int main(){
    int soma ,nota,media = 0 ;
    printf("DIgite as notas :\n");
    for(int t = 0 ; t < 10 ; t++){
        printf("digite a nota %d : ", t+1);
        scanf("%d",&nota);
        soma += nota;
    }
    media = soma/10 ;

    printf("a media eh %d",media);
    return 0;
}
