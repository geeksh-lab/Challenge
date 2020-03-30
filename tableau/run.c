
#include <stdlib.h>
#include <stdio.h>
#include "tableau.h"
int main(void){
    // recuperation de le fonction
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
     
    
    return 0x000;
}

