#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	printf("Enter a string:");
	gets(a);
	printf("Enter a string:");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("\nThe string are equal");
	}
	else
	{
		printf("\nThe string are not equal");
	}
return 0;
}

