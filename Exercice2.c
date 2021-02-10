#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
int NbImpair=0;
int NbPair=0;
int RechercheNb;
int Nombre=0;
int tabl[100];
int i;
for (i=0 ; i < 100; i++)
{
    int Nombre = rand() %101;
    tabl[i]=Nombre;
}
for (i = 0 ; i < 100 ; i++)
    {
        printf("%d|", tabl[i]);
    }

for (i = 0 ; i < 100 ; i++)
{
    if ((tabl[i])%2==0){
        NbPair=NbPair+1;
    }
    else {
        NbImpair=NbImpair+1;
    }
}
printf("\nIl y a %d nombres impairs. \n", NbImpair);
printf("Il y a %d nombres pairs.\n", NbPair);

printf("Saisissez un nombre a rechercher dans le tableau : ");
scanf("%d", &RechercheNb);
for (i = 0 ; i < 100 ; i++){
    if (tabl[i]==RechercheNb){
        Nombre=Nombre+1;
    }
    }
printf("Ce nombre est present %d fois dans ce tableau genere aleatoirement.", Nombre);
    return 0;
}
