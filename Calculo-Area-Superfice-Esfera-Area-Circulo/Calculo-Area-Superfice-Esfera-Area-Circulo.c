#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 
    // 

    char forma[50] = "";
    double raio = 0.0;
    double area = 0.0;
    double areaDaSuperfice = 0.0;
    double volumeDaEsfera = 0.0;
    double PI = 3.14159;
    
    
    printf("Digite a forma geometrica (circulo ou esfera): \n");
    scanf("%s", &forma);
    
    printf("Coloque o valor do raio:  \n");
    scanf("%lf", &raio);

    if(strcmp(forma, "circulo") == 0 || strcmp(forma,"círculo") == 0) {
   
        area = PI * pow(raio, 2);
        printf("Area do circulo: %.2lf\n", area);
        

    } else if(strcmp(forma, "esfera") == 0){

        volumeDaEsfera = 4 / 3 * PI * pow(raio, 3);
        areaDaSuperfice = 4 * PI * pow(raio, 2);
        printf("Volume da esfera: %.2lf\n", volumeDaEsfera);
        printf("Area da Superfice da esfera: %.2lf\n", areaDaSuperfice);

    }
     else{

        printf("Forma geometrica nao identificada");
     }
  


    return 0;
}

