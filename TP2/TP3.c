#include <stdio.h>
#include <stdlib.h>
int a,b;

int main(int argc, char *argv[]) {
  printf("How many years have you been in the company ?");
 scanf("%d", &a);
 if (a>=10){
 printf("You will get 10 percents off");
}
else{
	 if (a>=5){
 printf("You will get 5 percents off");
}
else{
}
}
	return 0;
}
