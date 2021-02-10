#include <stdio.h>
#include <stdlib.h>
float a,b,c;

int main(int argc, char *argv[]) {
  printf("Number 1 ?");
 scanf("%f", &a);
 printf("Number 2 ?");
 scanf("%f", &b);
 printf("Number 3 ?");
 scanf("%f", &c);
if (a==b){
 	if (a==c){
 	printf("3");
 	}	
	else{
 		printf("2");
	 }
 	
}
else{
	 if (b==c){
 	printf("2");
	}
	else{
	printf("0");
	}		
}
	return 0;
}
