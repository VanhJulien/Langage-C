#include <stdio.h>
#include <stdlib.h>
int a,b,c;
int main(int argc, char **argv)
{
 printf("Day of Birth ?");
 scanf("%d", &a);
  printf("Month of Birth ?");
 scanf("%d", &b);
  printf("Year of Birth ?");
 scanf("%d", &c);
 printf("You were born on the:%d/%d/%d/",a,b,c);
 return 0;
}
