#include<stdio.h>
#include<conio.h>
int main()
{
	float num[50],avr,sum=0;
	int i,n;
	printf("How many numbers are there ?\n");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		printf("\n%dth numbers:",i+1);
		scanf("%f",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
		avr=sum/n;
	}
	printf("\nThe average is %.2f",avr);
return 0;
}

