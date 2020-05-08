#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "funct.h"
#include <string.h>
#include "dic.h"
int main(void){
int i = 0;
int sizeWord = 0;
int nbCoups = 12;
char motChoisi[50]={0};
char lettre=0;
int *lettreTrouvee = NULL ;
printf("Bienvenue dans le jeu du pendu !!!!!!!\n");

//findChar(lettre, motChoisi, lettreTrouvee);
/**for (i=0;i<6;i++){
printf("\n%d\n", lettreTrouvee[i]);
}**/
if(!selectWord(motChoisi)){
exit(0);
}
sizeWord=strlen(motChoisi);
lettreTrouvee = malloc(sizeWord * sizeof(int));
if(lettreTrouvee == NULL)
	exit(0);
for (i = 0; i < sizeWord;i++){
lettreTrouvee[i] = 0;
}


while (!Win(lettreTrouvee) && nbCoups > 0){
printf("il vous reste %d coups a jouer!!!!!\n", nbCoups);
printf("le mot secret est : ");      
for (i=0; i<sizeWord;i++){
if(lettreTrouvee[i] == 1)
printf("%c",motChoisi[i]);
else
printf("*");

}

printf("\nVeuillez proposez une lettre\n");
lettre = readChar();
findChar(lettre, motChoisi, lettreTrouvee);
/**for (i=0;i<6;i++){
printf("\n%d\n", lettreTrouvee[i]);
}**/
if(!checkLetter(lettre, motChoisi)){
nbCoups--;
}

}
if(Win(lettreTrouvee)){
	
	printf("Bravo le mot secret etait %s\n", motChoisi);
	
printf("vous venez de gagner\n");
}
else{
printf("looser\n");
}
 free(lettreTrouvee);


return false;


}
