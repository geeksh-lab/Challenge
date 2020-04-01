
#include <stdlib.h>
#include <stdio.h>
#include "tableau.h"
#include "str.h"
#include <string.h>
int main(void){
    // recuperation de le fonction
    char nom[]= "baba";
    int length = 0;
    int moyenne;
    int verifsum;
    int sum;
    int tab1[TAILLE_TAB];
    int tab[TAILLE_TAB] = {24, 71, 13, 18, 45, 78, 56, 58};
    orderTab(tab, TAILLE_TAB);
    moyenne = averageTab(tab, TAILLE_TAB);
    printf("la moyenne des valeurs du tableau %d\n", moyenne);
    sum = sumTab(tab, TAILLE_TAB);
    printf("la somme des elements de ce tableau est %d\n", sum);
    copyTab(tab, tab1, TAILLE_TAB);
    verifsum  = sumTab(tab1, TAILLE_TAB);
   printf("La somme des elements du tableau copier est %d\n", verifsum);
  length = strlength(nom);
 printf("la longueur de la chaine %s est %d\n", nom, length); 
     
    
    return 0x000;
}

