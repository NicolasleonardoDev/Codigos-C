 // Joguinho Novo

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

int main(){

// Joguinho teste 1 (mad libs)


char lugar[50] = "";
char substantivo[50] = "";
char verbo[50] = "";
char adjetivo1[50] = "";
char adjetivo2[50] = "";
char adjetivo3[50] = "";

printf("Escolha um local(de sua preferencia): \n");
fgets(lugar, sizeof(lugar), stdin);
lugar[strlen(lugar) - 1] = '\0';

printf("Escolha um adjetivo (descricao): \n");
fgets(adjetivo1, sizeof(adjetivo1), stdin);
adjetivo1[strlen(adjetivo1) - 1] = '\0';

printf("Escolha um substantivo (Animal ou Pessoa): \n");
fgets(substantivo, sizeof(substantivo), stdin);
substantivo[strlen(substantivo) - 1] = '\0';

printf("Escolha um adjetivo (descricao): \n", substantivo);
fgets(adjetivo2, sizeof(adjetivo2), stdin);
adjetivo2[strlen(adjetivo2) - 1] = '\0';

printf("Escolha um verbo (terminado c/ -ndo): \n");
fgets(verbo, sizeof(verbo), stdin);
verbo[strlen(verbo) - 1] = '\0';

printf("Escolha um adjetivo (descricao): \n", substantivo);
fgets(adjetivo3, sizeof(adjetivo3), stdin);
adjetivo3[strlen(adjetivo3) - 1] = '\0';

printf("\nHoje eu fui para uma %s %s. \n", adjetivo1, lugar);
printf("La eu vi uma %s. \n", substantivo);
printf("A %s era muito %s. \n", substantivo, adjetivo2);
printf("Ela estava %s muito. \n", verbo);
printf("Eu estava muito %s! \n", adjetivo3);


printf("%s\n", lugar);
printf("%s\n", substantivo);
printf("%s\n", adjetivo1);
printf("%s\n", adjetivo2);
printf("%s\n", adjetivo3);


return 0;

}