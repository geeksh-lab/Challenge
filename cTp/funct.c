#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funct.h"
void findChar(char lettre, char *motChoisi, int *lettreTrouvee){

int i = 0;
for(i  = 0;i <strlen(motChoisi);i++ ){
if (lettre == motChoisi[i]){

lettreTrouvee[i] = 1;

}

}

}

int Win(int *lettreTrouvee){
int i = 0;
int check = 1;
for(i=0;i<6;i++){
if(lettreTrouvee[i] == 0){
check = 0;
}

}
return check;

}

int checkLetter(char lettre, char *motChoisi){
int i = 0;
int check = 0;
for (i=0;i<strlen(motChoisi);i++){
if (lettre == motChoisi[i]){
check = true;

}


}
return check;
}


char readChar(){
char caractere = 0;
caractere= getchar();
caractere = toupper(caractere);

while (getchar() != '\n');
return caractere;

}

int read(char *Array, int length){
char *chr = NULL;
if (fgets(Array, length, stdin) != NULL){
chr = strchr(Array, '\n');
if (chr != NULL){
chr = '\0';
return 1;

}
else{
return 0;;
}
}



}
