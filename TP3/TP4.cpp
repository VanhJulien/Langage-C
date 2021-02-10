#include <stdio.h>
#include <stdlib.h>

float c,d,a,b;

int main(int argc, char *argv[]) {
	d=0;
	b=0;
	do{
printf("Donnez une note (-1 pour finir) : ");
		scanf("%f", &a);
		if (a == -1){
		}
		else{
		b=b+a;
		d=d+1;
	}
}while(a!=(-1));
	c=b/d;
	printf("Moyenne : %f",c);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
