#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

    void limpar_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);

    }


    void mostrar_mensagem(){
        printf("\n");
        printf("               *********************************\n");
        printf("                CALCULADORA MATEMATICA SIMPLES\n");
        printf("               *********************************\n");
        printf("\n");

        printf("Operacoes disponiveis:\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Potencia\n");
        printf("6 - Raiz quadrada\n");
        printf("0 - Sair\n");
        printf("\n");

    }

    int main(){

        // opcional = setlocale(LC_ALL, "Portuguese"); Pra poder codar com acento, alguns so ne mas fazer oq ne rs


        int opcao;
        double num1, num2, resultado;
        char buffer[100];

        do {

            mostrar_mensagem();

            printf("Escolha uma opcao: \n");
            fgets(buffer, sizeof(buffer), stdin);
        
         
            if(sscanf(buffer, "%d", &opcao) != 1) {
                 printf("ERRO: Digite apenas numeros!\n");
                 printf("Pressione Enter para continuar...");
                 getchar();
                 continue;

            }        

            switch(opcao){

               case 1: // soma
                   printf("Digite dois numeros: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   resultado = num1 + num2;
                   printf("Resultado: %.2lf\n", resultado);
                   break;

                case 2: // subtracao
                   printf("Digite dois numeros: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   resultado = num1 - num2;
                   printf("Resultado: %.2lf\n", resultado);
                   break;

                case 3: // multiplicacao
                   printf("Digite dois numeros: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   resultado = num1 * num2;
                   printf("Resultado: %.2lf\n");
                   break;
                
                case 4: //divisao
                   printf("Digite dois numeros: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   if(num2 != 0){

                       resultado = num1 / num2;
                       printf("Resultado: %.2lf\n", resultado);
                       
                } else{
                    
                       printf("Erro: Divisao por zero!\n");

                   }
                   break;
                   
                
                case 5: // potencia
                   printf("Digite dois numeros (Base e Expoente): \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   resultado = pow(num1, num2);
                   printf("Resultado: %.2lf\n", resultado);
                   break;

                case 6: // raiz quadrada   
                   printf("Digite dois numero \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf", &num1);
                   if(num1 >= 0){
                       resultado = sqrt(num1);
                       printf("Resultado: %.2lf\n", resultado);
                   } else {
                       printf("Erro: Nao existe raiz real desse numero!\n");
                   }
                   break;

                case 0: // sair
                   printf("Saindo...\n");
                   break;
            
                default:
                   printf("Opcao invalida! Tente novamente.\n");
                   break;
  
            }

            printf("\n");

        } while(opcao != 0);


        return 0;
    }




        


    


            



    



        


 



