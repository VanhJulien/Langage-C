#include <stdio.h>
#include <stdlib.h>
float a,b,c;

int main(int argc, char *argv[]) {
  printf("How old are you ? (max 16)");
  scanf("%f", &a);
 if ((a==6)||(a==7)){
 	printf("Mini-poussin");
 }
 if ((a==8)||(a==9)){
 	printf("Poussin");
 	}
 if ((a==10)||(a==11)){
 	printf("Minime");
 }
 if ((a==12)||(a==13)||(a==14)||(a==15)||(a==16)){
 	printf("Cadet");
 }
 if ((a>16)){
    printf("Age invalide");
}
 if ((a<6)){
 	printf("Age invalide");
 }
 	
	return 0;
}
