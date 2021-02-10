#include <stdio.h>
#include <stdlib.h>

int i,c,table;

int main(int argc, char *argv[]) {
	i=0;
	c=0;
	for (int c = 0 ; c<=10 ;c++){
		printf("TABLE DE : %d", c), printf("\n");
		printf("\n");
	for (int i = 0 ; i<=10 ;i++){
		table = c * i;
		printf("%d * %d = %d", i,c,table), printf("\n");
	}
	printf("\n");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
