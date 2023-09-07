#include<stdio.h>
#include<conio.h>
float si(float,float,float);
int main()
{
	float p,t,r;
	printf("Enter principal,time,rate:\n");
	scanf("%f%f%f",&p,&t,&r);
	printf("The simple interest is %f",si(p,t,r));
	return 0;
}
float si(float p,float t,float r)
{
	return((p*t*r)/100);
}
