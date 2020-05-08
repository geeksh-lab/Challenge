#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int numAlea(int nombreMax){
	srand(time(NULL));
	return (rand() % nombreMax);


}

int selectWord(char *wordSelect){
int numberOfWord = 0;
int numChoose = 0;
	FILE *dico = NULL;
	dico = fopen("test.txt", "r");
	if (dico == NULL){
	printf("le fichier ne peut etre ouvert !!!1");
		exit(3);
	
	}
	while(fgetc(dico) != EOF){
	if(fgetc(dico) == '\n') {
		numberOfWord++;
	}
	}
	numChoose = numAlea(numberOfWord);

rewind(dico);
while (numChoose > 0){
if(fgetc(dico) == '\n'){
numChoose--;
}
}
fgets(wordSelect, 100, dico);
 wordSelect[strlen(wordSelect) - 1] = '\0';
 fclose(dico);

 return 1;

}
