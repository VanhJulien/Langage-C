#include <stdio.h>
#include <stdlib.h>
int a;
int main(int argc, char **argv)
{
 const int b = 2020;
  printf("Year of Birth ?");
 scanf("%d", &a);
 printf("You are %d or will be in the year.", b - a );
 return 0;
}
