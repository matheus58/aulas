/*
 *  Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença 
 * produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
 *Apresente o resultado da seguinte forma:
 *
 *DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
 *DIFERENCA = (“valor de DIFERENCA”)
 */
#include <stdio.h>


int main(){
    int a,b,c,d = 0 ;

    printf("digite o primeiro numero :\n");
    scanf("%d",&a);
    printf("digite o segundo numero :\n");
    scanf("%d",&b);
    printf("digite o terceiro numero :\n");
    scanf("%d",&c);
    printf("digite o quarto numero :\n");
    scanf("%d",&d);

    int diferenca = a*b-c*d;
    
    printf("valor de %d * valor de %d - valor de %d * valor de %d \n",a,b,c,d);
    printf("valor de diferença %d\n",diferenca);


    
    return 0 ;
}
