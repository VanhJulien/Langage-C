#include <stdio.h>
#include <stdlib.h>
float a,b,c,d,e,f,g,h;
int main(int argc, char **argv)
{
const int i = 2,j = 1,k = 3,l = 4,m = 5;
printf("note en culture generale ?");
scanf("%f", &a);
printf("note en anglais ?");
scanf("%f", &b);
printf("note en mathematique ?");
scanf("%f", &c);
printf("note en algorithmique ?");
scanf("%f", &d);
printf("note en economie et droit ?");
scanf("%f", &e);
printf("note en etude de cas ?");
scanf("%f", &f);
printf("note en epreuve e4 ?");
scanf("%f", &g);
printf("note en epreuve e6 ?");
scanf("%f", &h);
printf("votre moyenne est de %f", (a * i + b * i + c * i + d * j + e * k + f * m + g * l + h * k) / (i + i + i + j + k + m + l + k) );
return 0;
}
