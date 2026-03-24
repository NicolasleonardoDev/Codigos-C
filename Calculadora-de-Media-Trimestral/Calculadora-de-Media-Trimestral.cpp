#include <stdio.h>
#include <math.h>
 
// Calculadora de media trimestral

int main(){
   // 
    float n1, n2, n3, media;

    printf("Digite suas 3 notas do trimestre: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3; 

    printf("Media: %.2f\n", media);

    if(media >= 7){

        printf("APROVADO!\n");
    
    } else if(media >= 5 ){

        printf("RECUPERAÇÃO!\n");

    } else {

        printf("REPROVADO!\n");
    }

    return  0;


}
