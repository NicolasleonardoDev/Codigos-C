#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

    void limpar_buffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);

    }


    void show_message(){
        printf("\n");
        printf("               *********************************\n");
        printf("                Simple Mathematical Calculator\n");
        printf("               *********************************\n");
        printf("\n");

        printf("Avaible mathematical operations:\n");
        printf("1 - Sum\n");
        printf("2 - Subtraction\n");
        printf("3 - Multiplication\n");
        printf("4 - Division\n");
        printf("5 - Power\n");
        printf("6 - Square Root\n");
        printf("0 - Exit\n");
        printf("\n");

    }

    int main(){

        int option;
        double num1, num2, result;
        char buffer[100];

        do {

            show_message();

            printf("Choose an option: \n");
            fgets(buffer, sizeof(buffer), stdin);
        
         
            if(sscanf(buffer, "%d", &option) != 1) {
                 printf("ERRO: Enter only numbers!\n");
                 printf("Press Enter to continue...");
                 getchar();
                 continue;

            }        

            switch(option){

               case 1: // sum
                   printf("Enter two numbers: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   result = num1 + num2;
                   printf("Result: %.2lf\n", result);
                   break;

                case 2: // subtraction
                   printf("Enter two numbers: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   result = num1 - num2;
                   printf("Result: %.2lf\n", result);
                   break;

                case 3: // multiplication
                   printf("Enter two numbers: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   result = num1 * num2;
                   printf("Result: %.2lf\n", result);
                   break;
                
                case 4: //division
                   printf("Enter two numbers: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   if(num2 != 0){

                       result = num1 / num2;
                       printf("Result: %.2lf\n", result);
                       
                } else{
                    
                       printf("Erro: Division by Zero!\n");

                   }
                   break;
                   
                
                case 5: // power
                   printf("Enter two numbers: (Base and Exponent ): \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf %lf", &num1, &num2);
                   result = pow(num1, num2);
                   printf("Result: %.2lf\n", result);
                   break;

                case 6: // square Root   
                   printf("Enter two numbers: \n");
                   fgets(buffer, sizeof(buffer), stdin);
                   sscanf(buffer, "%lf", &num1);
                   if(num1 >= 0){
                       result = sqrt(num1);
                       printf("Resul: %.2lf\n", result);
                   } else {
                       printf("Erro: Dont exist a real number of this square root!\n");
                   }
                   break;

                case 0: // Exit
                   printf("Closing...\n");
                   break;
            
                default:
                   printf("Invalid option! Try again.\n");
                   break;
  
            }

            printf("\n");

        } while(option != 0);


        return 0;
    }




        


    


            



    



        


 



