#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    double futureValue = 0.0;
    double principal = 0.0;
    double interest = 0.0;
    int time = 0;

    printf("Enter the Principal: \n");
    scanf("%lf", &principal);

    printf("Enter the interest rate: \n");
    scanf("%lf", &interest);

    printf("Enter the time(years): \n");
    scanf("%d", &time);
    
    
    futureValue = principal * pow(1 + interest, time);
     printf("After %d year/s, the total amount will be: R$%.2lf\n",time, futureValue);


     return 0;
}
