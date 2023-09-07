#include<stdio.h>
int prime(int);

int main()
{

	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int c=prime(num);
	if(c==2){
		printf("The number is prime");
	}
	else
	{
		printf("The number is not prime");
	}
}

int prime(int a)
{
	int i,count=0;
	for(i=0;i<=a;i++)
	{
		if(a%1==0)
			count++;
	}
	return count;
}


