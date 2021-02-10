#include <stdio.h>
#include <stdlib.h>

void p1();
void p2(int n);
int f1(int n);

int main(int argc, const char * argv[]) {
int valeurRetour;
p1();
p2(5);

valeurRetour = f1(5);
printf("Valeur de retour apres l'appel de la fonction f1 = %i \n",valeurRetour);
 return 0;
}
void p1()
{
printf("Bonjourp1\n");
}
void p2(int n)
{
for(int i=1 ; i<= n;i++){
printf("Bonjourp2\n");
}
}
int f1(int n)
{
for(int i=1 ; i<= n;i++){
printf("Bonjourf1\n");
}
return 0;
}
