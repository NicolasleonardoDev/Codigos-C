#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

            // TEMPERATURE CONVERSION CALCULATOR

void show_message(){

    printf("\n");
    printf("                 *************************\n");
    printf("             Temperature Conversion Calculator\n");
    printf("                 *************************\n");
    printf("\n");

    printf(" Available operations options: \n");
    printf("1- Convert Celsius to Fahreinheit\n");
    printf("2- Convert Celsius to Kelvin\n");
    printf("3- Convert Fahreinheit to Celsius\n");
    printf("4- Convert Fahreintheit to Kelvin\n");
    printf("5- Convert Kelvin to Celsius\n");
    printf("6- Convert Kelvin to Fahreinheit\n");
    printf("0- Sair\n");
}

    int main() {

        int option;
        double num1, num2, num3; // num1 = Celsius, num2 = Fahreinheit, num3 = Kelvin
        char buffer[100];

           do {

            show_message();

            printf("Choose an option:\n");
            fgets(buffer, sizeof(buffer), stdin);

            if(sscanf(buffer, "%d", &option) != 1) {
                printf("ERRO: Type only numbers\n");
                printf("Press ENTER to continue\n");
                getchar();
                continue;
            }

               switch(option) {
                    case 1: // Celsius to Fahreinheit
                    printf("Type your temperature in Celsius: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num1);
                    num2 =  num1 *  1.8 +  32;
                    printf("Result: %.2lf Celsius equal a %.2lf Fahreinheit\n", num1, num2);
                    break;

                    case 2: // Celsius to Kelvin
                    printf("Type your temperature in Celsius: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num1);
                    num3 = num1 + 273;
                    printf("Result: %.2lf Celsius equal a %.2lf Kelvin\n", num1,  num3);
                    break;

                    case 3: // Fahreinheit to Celsius
                    printf("Type your temperature in Fahreinheit: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num2);
                    num1 = 5.0 / 9.0 * (num2 - 32);
                    printf("Result: %.2lf Fahreinheit equal a %.2lf Celsius\n", num2, num1);
                    break;

                    case 4: // Fahreinheit to Kelvin
                    printf("Type your temperature in Fahreinheit: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num2);
                    num3 = (num2 - 32) * 5.0 / 9.0 + 273;
                    printf("Result: %.2lf Fahreinheit equal a %.2lf Kelvin \n", num2, num3);
                    break;

                    case 5: // Kelvin to Celsius
                    printf("Type your temperature in Kelvin: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num3);
                    num1 = num3 - 273;
                    printf("Result: %.2lf Kelvin equal a %.2lf Celsius \n", num3, num1);
                    break;

                    case 6: // Kelvin to Fahreinheit
                    printf("Type your temperature in Kelvin: \n");
                    fgets(buffer, sizeof(buffer), stdin);
                    sscanf(buffer, "%lf", &num3);
                    num2 = (num3 - 273) * 1.8 + 32;
                    printf("Result: %.2lf Kelvin equal a %.2lf Fahreinheit \n", num3, num2);
                    break;

                    case 0: // Exit the program
                    printf("Closing calculator...\n");
                    break;

                    default:
                    printf("Invalid option! Try again.\n");
               }
               printf("\n");

        } while(option != 0);
          return 0;

}