#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,rev=0,a;
	printf("Enter a number to reverse:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reversed number:%d\n",rev);
	if(a==rev)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
return 0;
}

