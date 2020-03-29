#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int menu(){
	int level = 0;
	while (level < 1 || level > 3){
	printf("1:niveau facile nombre de 1-100\n");
	printf("2:niveau intermediaire nombre de 1-500\n");
	printf("3:niveau difficile nombre de 1-1000\n");
	printf("selectionnez votre niveau\n");
	scanf("%d", &level);
	}
	return level;
}
int main(void){
int MIN=0, MAX=100;
int nombreMystere = 0;
int nombreSaisi = 0;
int i = 0;
int continuer_partie = 0;
int level = 0;

srand(time(NULL));
nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
printf("----------------------------------------\n");
printf("Bienvenue dans le jeu du nombre mystere\n");
printf("----------------------------------------\n");
//creation d une boucle pour la partie
while(continuer_partie == 0 ){
//choix du niveau de difficulte
level = menu();
if (level == 1){
        printf("vous avez choisi le niveau facile\n");
        MAX=100;

}
else if(level == 2){
        printf("vous avez choisi le niveau intermediare\n");
        MAX = 500;
}
else{
        printf("vous avez choisi le niveau difficile\n");
        MAX=1000;

}

//creation de la boucle pour pouvoir tester les valeurs
while(nombreMystere != nombreSaisi){
	
		printf("veuillez saisir le nombre rechercher\n");
	
		scanf("%d", &nombreSaisi);
		if(nombreSaisi > nombreMystere){
					printf("trop\n");
			i += 1;
		}
	
		else if (nombreSaisi < nombreMystere){
			printf("peu\n");
			i += 1;
		}
	
		else{
			printf("exact!!!!!!\n");
			printf("vous avez terminer la partie avec %d coups\n", i);
			

		}



	}
			 printf("voulez vous quitter\n");
                         scanf("%d", &continuer_partie);
			 if(continuer_partie== 0){
			 nombreSaisi = 0;
			 i = 0;
			 }
			 
	

}

return 0x000;


}
