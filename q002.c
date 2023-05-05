#include <stdio.h>
#include <math.h>

int main(){
    float x1 ,x2 ,y1 ,y2 = 0;
    printf("digite a codenada de  x e y do primero ponto :");
    scanf("%f" "%f",&x1,&y1);
    printf("digite oa codernada de x e y do segundo ponto:");
    scanf("%f""%f",&x2,&y2);


    float distancia = sqrt(pow(x1 - x2, 2) + pow( y1 - y2, 2));

    printf("%0.4f",distancia);
    return 0 ;
}
