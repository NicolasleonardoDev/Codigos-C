#include <stdio.h> 
#include <stdbool.h>
#include <string.h>

int main(){
    //     DADOS DE USUARIO.
    //     USUARIOS COM DADOS COMPLETAMENTE SEGUROS

    int idade = 0;
    float media = 0.0;
    float nota = 0;
    char nome [100] = "";
    int genero;
    char email [100] = "";
    

    printf("Escreva seu nome completo: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome) - 1] = '\0';


    printf("Coloque sua idade: ");
    scanf("%d", &idade);
      

    printf("Coloque sua media: ");
    scanf("%f", &media);
    

    printf("Coloque a sua nota: ");
    scanf(" %f", &nota);

   
    printf("Informe o seu email: ");
    scanf(" %s", &email);
    

    printf("Se voce e homem (0 = nao, 1 = sim, 2 = nao binario e 3 = nao quero me identiicar): ");
    scanf(" %d", &genero);

    

    if(genero == 1){

        printf("homem\n");

    } 
    else if(genero == 0){

        printf("mulher\n");
    }
    else if(genero == 2){

        printf("nao binario\n");
    }
    else if(genero == 3){

        printf("nao quero me identificar\n");
    }
    else{

        printf("Opcao invalida\n");
    }



    printf("%s\n", nome);
    printf("%d\n", idade); 
    printf("%.1f\n", media);
    printf("%.1f\n", nota);
    printf("%s\n", email);
    printf("%d\n", genero);
    
    
    return 0;


}