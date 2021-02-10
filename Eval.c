#include <stdio.h>
#include <stdlib.h>

float locationtime,km,prixdiesel,prixessence;
const float prixjourdiesel = 27,prixjouressence = 25,prixkmdiesel = 0.10, prixkmessence = 0.12;

int main(int argc, char *argv[]) {

 printf("Duree en jours de la location ?");
 scanf("%f", &locationtime);
  printf("Kilometrage prevu ?");
 scanf("%f", &km);
 
 if(locationtime < 1){ //vérifier si la durée de location saisie est valide
 	printf("Erreur dans la saisie de la durée de location."); 
 }
 else{ 
 	if(km < 0){ //vérifier si le kilometrage saisi est valide
 		printf("Erreur dans la saisie du kilometrage prevu.");
 	}
	 else{

		if (locationtime < 7){ //Prix si la durée de location est de moins de 7 jours
			prixdiesel = prixjourdiesel * locationtime + prixkmdiesel * km;
			prixessence = prixjouressence * locationtime + prixkmessence * km;
			printf("Le cout d'une location de voiture essence est de : %f \n", prixessence);
			printf("Le cout d'une location de voiture diesel est de : %f \n", prixdiesel);
			if(prixdiesel < prixessence){
				printf("La location d'une voiture a essence est la solution la plus economique.");
			}
			if(prixdiesel > prixessence){
				printf("La location d'une voiture diesel est la solution la plus economique. ");
			}
			if(prixdiesel == prixessence){
				printf("Les deux types de location (essence et diesel) sont au meme prix.");
			}
		}
		else{
			if (locationtime >= 7 && locationtime<15){ //Prix si la durée de location est entre 7 et 15 jours (7 inclu, 15 exclu)
				prixdiesel = prixjourdiesel * locationtime + prixkmdiesel * km;
				prixdiesel = prixdiesel - (prixdiesel * 4/100);
	 		    prixessence = (prixjouressence * locationtime + prixkmessence * km);
	  		    prixessence = prixessence - (prixessence * 5/100);
	  		    printf("Le cout d'une location de voiture essence est de : %f \n", prixessence);
     			printf("Le cout d'une location de voiture diesel est de : %f \n", prixdiesel);
     			if(prixdiesel < prixessence){
					printf("La location d'une voiture a essence est la solution la plus economique. ");
				}
				if(prixdiesel > prixessence){
					printf("La location d'une voiture diesel est la solution la plus economique. ");
				}
				if(prixdiesel == prixessence){
					printf("Les deux types de location (essence et diesel) sont au meme prix.");
				}
			}
			else{ //Prix si la durée de location est de 15 jours ou plus
				prixdiesel = prixjourdiesel * locationtime + prixkmdiesel * km;
				prixdiesel = prixdiesel - (prixdiesel * 8/100);
	   	   	    prixessence = (prixjouressence * locationtime + prixkmessence * km);
	  	   	    prixessence = prixessence - (prixessence * 10/100);
	       		printf("Le cout d'une location de voiture essence est de : %f \n", prixessence);
    			printf("Le cout d'une location de voiture diesel est de : %f \n", prixdiesel);
    			if(prixdiesel < prixessence){
					printf("La location d'une voiture a essence est la solution la plus economique. ");
				}
				if(prixdiesel > prixessence){
					printf("La location d'une voiture diesel est la solution la plus economique. ");
				}
				if(prixdiesel == prixessence){
					printf("Les deux types de location (essence et diesel) sont au meme prix.");
				}
			}
		}	
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
