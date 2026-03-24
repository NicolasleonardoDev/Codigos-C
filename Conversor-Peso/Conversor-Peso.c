#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


void limpar_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF); 
}

 void mostrar_mensagem(){

    printf("\n ");
    printf("                      *******************\n");
    printf("                        CONVERSOS DE PESO\n");
    printf("                       *******************\n");
    printf("\n");

    printf("Conversoes disponiveis\n");
    printf("1- Conversao libras para kilogramas\n");
    printf("2- Conversao kilogramas para libras\n");
 }

int main(){

      int escolha; 
      double num1, num2, resultado;  // KG, LIBRA, RESULT
      char buffer[100];


     do{

         mostrar_mensagem();

         printf("escolha uma opcao \n");
         fgets(buffer, sizeof(buffer), stdin);

         if(sscanf(buffer, "%d", &escolha) != 1) {
                 printf("ERRO: Digite apenas numeros!\n");
                 printf("Pressione Enter para continuar...");
                 getchar();
                 continue;
                 
 }

        switch(escolha) {

                 case 1: // Libras para kilograma
                 printf("Digite seu peso em libras: \n");
                 fgets(buffer, sizeof(buffer), stdin);
                 sscanf(buffer, "%lf", &num1);
                 num2 = num1 / 2.2;
                 printf("Resultado %.2lf libras equivalem a %.2lf kilogramas", num1, num2);
                 break;

                 case 2: // Kilograma para libras
                 printf("Digite seu peso em kilograma: \n");
                 fgets(buffer, sizeof(buffer), stdin);
                 sscanf(buffer, "%lf", &num2);
                 num1  = num2 * 2.20462;
                 printf("resultado %.2f kilogramas equivalem a %.2f libras", num2, num1);
                 break;



        }
        printf("\n");

  } while(escolha != 0);

    return 0;
}