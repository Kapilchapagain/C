#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,rev=0;
	printf("Enter a number you want to reverse:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reversed number is %d",rev);
	return 0;
}