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
 if (a>b){
 	if (a>c){
 	printf("%f",a);
 	}	
	else{
 	printf("%f",c);
 	}	
}
else{
	 if (b>c){
 	printf("%f",b);
	}
	else{
	printf("%f",c);
	}		
}
	return 0;
}
