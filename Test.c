#include <stdio.h>
#include <stdlib.h>
int a;
int main(int argc, char **argv)
{
 const int b = 0.05;
  printf("Total Bill ?");
 scanf("%d", &a);
 printf("You are %d or will be in the year.", a - (b * a));
 return 0;
}