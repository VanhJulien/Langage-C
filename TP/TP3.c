#include <stdio.h>
#include <stdlib.h>
float a;
int main(int argc, char **argv)
{
 const float b = 0.05;
  printf("Total Bill ?");
 scanf("%f", &a);
 printf("You will pay %f", (a-b*a));
 return 0;
}
