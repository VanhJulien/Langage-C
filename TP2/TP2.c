#include <stdio.h>
#include <stdlib.h>
int a,b;

int main(int argc, char *argv[]) {
  printf("Number 1 ?");
 scanf("%d", &a);
 printf("Number 2 ?");
 scanf("%d", &b);
 if ((a+b) % 2==0){
 printf("La somme de a et b est paire");
}
else{
	printf("La somme de a et b est impaire");
}	
	return 0;
}
