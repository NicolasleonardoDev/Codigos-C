#include <stdio.h>
#include <string.h>

int main() {
    int number;
    float price;
    float pi;
    char grade[30] = "";
    char name[30] = "";  
    int beauty;
    char temp[100];
    int c;  // para limpar buffer
    
    printf("Enter the number of people: \n");
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%d", &number);
    
    printf("Enter the TV price: \n"); 
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%f", &price);

    printf("The first numbers (5) of pi are?: \n");
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%f", &pi);
    
    printf("Enter the grade: \n");
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%s", grade);  // char [] nao precisa de &no sscanf

       // limpa o buffer
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter his name: \n");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0'; // remove a quebra de linha do fgets
	
    printf("Is your friend pretty? (1 = Yes, 0 = No): \n");
    fgets(temp, sizeof(temp), stdin);
    sscanf(temp, "%d", &beauty);
    
    printf("The number of people in this party is %d\n", number);
    printf("This TV cost $%.2f\n", price);
    printf("The number of PI you entered: %.4f\n", pi);
    printf("Your grade is %s\n", grade);
    printf("His name is %s\n", name);

    if(beauty == 1) { 
        printf("Your friend is pretty\n");
    } else{
        printf("Your friend isn't pretty\n");
    }
     return 0;
}
    