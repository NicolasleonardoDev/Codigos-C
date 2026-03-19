#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    double montante = 0.0;
    double capital = 0.0;
    double taxaDoJuros = 0.0;
    int tempo = 0;

    printf("Digite o capital: \n");
    scanf("%lf", &capital);

    printf("Digite a taxa do juros \n");
    scanf("%lf", &taxaDoJuros);

    printf("Digite o tempo: \n");
    scanf("%d", &tempo);

    montante = capital * pow(1 + taxaDoJuros, tempo);
     printf("Montante e: R$%.2lf\n", montante);


     return 0;
}