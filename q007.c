/*
 Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
 */

#include <stdio.h>

int main(){
    int numero = 0 ;

    do {
        printf("digite um numero :");
        scanf("%d",&numero);
    }while(numero<= 0);

    if (numero == 1){// primeiro termo 
        printf("O termo %d eh: 0 \n",numero);
    }else{
        if(numero == 2){//segundo termo 
        printf("O termo %d eh: 1 \n",numero);
        }else{
            printf("O termo %d eh: %d \n",numero, (numero - 1)+(numero-2));
        }
    }
    return 0 ;
}
