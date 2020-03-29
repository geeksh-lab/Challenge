
#include <stdlib.h>
#include <stdio.h>
#include "tableau.h"
int main(void){
    // recuperation de le fonction
    int moyenne;
    int tab[TAILLE_TAB] = {24, 71, 13, 18, 45, 78, 56, 58};
    ordonnerTableau(tab, TAILLE_TAB);
    moyenne = moyenneTableau(tab, TAILLE_TAB);
    printf("la moyenne des valeurs du tableau %d\n", moyenne);
    
    
    
    return 0x000;
}

