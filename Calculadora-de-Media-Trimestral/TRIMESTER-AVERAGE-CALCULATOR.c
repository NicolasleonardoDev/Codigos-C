#include <stdio.h>
#include <math.h>
 
// TRIMESTER AVERAGE CALCULATOR

int main(){
   // 
    float n1, n2, n3, average;

    printf("Type your 3 grades from your trimester: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    average = (n1 + n2 + n3) / 3; 

    printf("Average: %.2f\n", average);

    if(average >= 7){

        printf("APPROVED!\n");
    
    } else if(average >= 5 ){

        printf("RECOVERY!\n");

    } else {

        printf("FAILURE!\n");
    }

    return  0;


}