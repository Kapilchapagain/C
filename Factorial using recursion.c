#include<stdio.h>
#include<conio.h>
int fact(int n); // function declaration//
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Factorial is %d",fact(num));// function call//
return 0;
}
// function difination//
int fact(int n)
{
if (n==0 || n==1)
{
	return 1;
}
else
{
	return (n*fact(n-1));
}
}

