#include <stdio.h> 
#include <stdbool.h>

int main(){
    //     DADOS DE USUÁRIO.
    
    int idade = 0;
    float media = 0.0;
    float nota = 0;
    char nome [30] = "";
    int genero;
    
    printf("Escreva seu nome: ");
    scanf(" %s", &nome);

    printf("Coloque sua idade: ");
    scanf("%d", &idade);
      

    printf("Coloque sua media: ");
    scanf(" %f", &media);
    

    printf("Coloque a sua nota: ");
    scanf(" %f", &nota);

    printf("Se voce e homem (1 = sim ou 0 = nao): ");
    scanf(" %d", &genero);

    if(genero == 1){

        printf("homem\n");

    } 
    else if(genero == 0){

        printf("mulher\n");
    }
    else{

        printf("opcao invalida\n");
    }
    
    printf("%s\n", nome);
    printf("%d\n", idade); 
    printf("%.1f\n", media);
    printf("%.1f\n", nota);
    printf("%d\n", genero);
    
    return 0;


}