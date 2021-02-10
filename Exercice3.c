#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int tabl[20];
	int Nombre=0;
	int i;
	int x=-1;
	
	for (i=0 ; i < 20; i++)
    {
    int Nombre = rand() %101;
    tabl[i]=Nombre;
    }
	for (i = 0 ; i < 20 ; i++)
    {
        printf("%d|", tabl[i]);
    }
    printf("\n Saisissez un nombre a rechercher dans le tableau : ");
	scanf("%d", &Nombre);
	for (i = 20 ; i > -1 ; i=i-1)
    {
    if (tabl[i] == Nombre){
    	x=i;
	}
   
    }
	printf("Ce nombre est present en indice %d dans ce tableau (Si l'indice est -1, le nombre recherché n'est pas présent dans ce tableau)\n", x);
	
	
	
	
	return 0;
}



