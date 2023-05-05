/*
 Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim,
apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo
deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade
de frutas. Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade
2 => MAÇA – 1,00 a unidade
3 => PERA – 4,00 a unidade
 */

#include <stdio.h>

int main(){
    int fruta = 0 ;
    int ab,ma,pe = 0 ;
    int total ;

    do{

    printf("*--------------  FRUTAS  ----------------------*\n");
    printf("| ABACAXI - 5,00 unidade   (1)                 |\n");
    printf("| MAÇA - 1,00 a unidade    (2)                 |\n");
    printf("| PERA - 4,00 a unidade    (3)                 |\n");
    printf("*----------------------------------------------*\n");
    printf("| QUANTIDADE :                                 |\n");
    printf("|  ABACAXI : %d                                 |\n",ab);
    printf("|  MAÇA : %d                                    |\n",ma);
    printf("|  PERA : %d                                    |\n",pe);
    printf("*----------------------------------------------*\n");
    printf("| TOTAL : %d                                    |\n",total);
    printf("*----------------------------------------------*\n");
    scanf("%d",&fruta);
    if(fruta == 1){
        ab++;
    }else if(fruta == 2) {
        ma++;
    }else if (fruta == 3){
        pe++;
    }
    total = (ab*5)+(ma*1)+(pe*4);

    }while(fruta > 0);
    return 0;
}
