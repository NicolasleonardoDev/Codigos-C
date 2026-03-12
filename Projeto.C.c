#include <stdio.h> 

int main(){
    
    int idade = 0;
    float media = 0.0;
    float nota = 0;
    char nome [30] = "";
    
    printf("Coloque sua idade: ");
    scanf("%d", &idade);
      

    printf("Coloque sua media: ");
    scanf("%f", &media);
    

    printf("Coloque a sua nota: ");
    scanf(" %f", &nota);


    printf("%d\n", idade); 
    printf("%.2f\n", media);
    printf("%.1f\n", nota);
    printf("%s\n", nome);

    return 0;

}