#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
int tabl [5] ; 
int i ;
for (i = 1 ; i <= 5 ; i++) {
printf ("Entrez l'entier numero %d :\n", i) ;
scanf ("%d", &tabl [i]) ;
}
printf ("Voici les entiers saisis inverses : ") ;
for (i=5 ; i>0 ; i=i-1) {
printf ("%d ", tabl [i]) ;
}
return 0 ;
}
