// SISTEMA DE CARRINHO DE COMPRAS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main(){

  char item[50] = "";
  float preco = 0.0f;
  int quantidade = 0;
  char moeda[3] = "R$";
  float total = 0.0f;
 
   
  printf ("Qual item voce gostaria de comprar?: \n");
  fgets(item, sizeof(item), stdin);
  item[strlen(item) - 1] = '\0';

  printf("Qual e o preco do produto: \n");
  scanf("%f", &preco);

  printf("Quantos voce gostaria?: \n");
  scanf("%d", &quantidade);

  printf("\nVoce comprou %d %s/s\n", quantidade, item);
 
  total = preco * quantidade;
  
  printf("O total e: %s%.2f", moeda, total);


   return 0;

}                