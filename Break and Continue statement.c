#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	printf("Using break statement:\n");
	for(i=1;i<=10;i++)
	{
		if(i==5){
			break ;
		}
		printf("%d",i);
	}
	printf("\n");
	
	printf("Using continue statement:\n");
	for(i=1;i<=10;i++)
	{
		if(i==5){
			continue;
		}
		printf("%d",i);
	}
	printf("\n");
	
return 0;
}

