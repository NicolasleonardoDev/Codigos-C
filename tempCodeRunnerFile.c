#include <stdio.h>
#include <stdbool.h>

int main(){

    int idade = 0;
    float media = 0.0;
    float nota = 0;
    char nome[30] = "";
    bool Homem;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Coloque sua idade: ");
    scanf("%d", &idade);

    printf("Coloque sua media: ");
    scanf("%f", &media);

    printf("Coloque a sua nota: ");
    scanf("%f", &nota);

    printf("Voce e homem? (1 = sim, 0 = nao): ");
    scanf("%d", &Homem);

    if(Homem){
        printf("Homem\n");
    }
    else{
        printf("Mulher\n");
    }

    printf("\n--- Dados ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Media: %.2f\n", media);
    printf("Nota: %.1f\n", nota);
    printf("Homem (bool): %d\n", Homem);

    return 0;
}
