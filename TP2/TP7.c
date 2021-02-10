#include <stdio.h>
#include <stdlib.h>
int a,b,c,d,e;

int main(int argc, char *argv[]) {
  printf("Day ?");
 scanf("%d", &a);
 printf("Month ?");
 scanf("%d", &b);
 printf("Hour ?");
 scanf("%d", &c);
  printf("Minute ?");
 scanf("%d", &d);
 printf("Year ?");
 scanf("%d", &e);

if (((b==1) || (b==3) || (b==5) || (b==7) || (b==8) || (b==10) || (b==12)) && (a>31)){
	printf("Invalid entry");
}
else{
if (((b==2) || (b==4) || (b==6) || (b==9) || (b==11)) && (a>30)){
	printf("Invalid entry");
}
else{
if (b>12){
	printf("Invalid entry");
}
else{
if (c>=24){
	printf("Invalid entry");
}
else{
if (d>=60){
	printf("Invalid entry");
}
else{
if (((b==2) && (a>28)) && (e % 4!=0)){
	printf("Invalid entry");
}
else{
if (d<59){
	d=d+1;
	printf("%d/%d/%d/%d:%d", e,b,a,c,d);
}
else{
if (d==59){
	d=0;
	c=c+1;
	if (c<24){
	printf("%d/%d/%d/%d:%d", e,b,a,c,d);
}
	if(c==24){
	c=0;
	a=a+1;

	if (((b==1)|| (b==3) || (b==5) || (b==7) || (b==8) || (b==10) || (b==12)) && (a<=31)){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
	else{
	if (((b==1)|| (b==3) || (b==5) || (b==7) || (b==8) || (b==10) || (b==12)) && (a>=32)){
		a=1;
		b=b+1;
		if (b<=12){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
		if (b>=13){
		b=1;
		e=e+1;
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
	}
	else{
	if (((b==4) || (b==6) || (b==9) || (b==11)) && (a<=30)){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
	else{
	if (((b==4) || (b==6) || (b==9) || (b==11)) && (a>=31)){
		a=1;
		b=b+1;
		if (b<=12){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
		if (b>=13){
		b=1;
		e=e+1;
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
	}
		else{
	
	if ((b==2) && (a<=28)){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
		}
		else{
	if ((b==2) && (a>=29) && (e % 4!=0)){
		a=1;
		b=b+1;
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
	}
	else{
	if ((b==2) && (a>29) && (e % 4==0)){
		a=1;
		b=b+1;
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
	}
	else{
	if ((b==2) && (a==29) && (e % 4==0)){
		printf("%d/%d/%d/%d:%d", e,b,a,c,d);
	}
	}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
	return 0;
}
