#include<stdio.h>
#include<conio.h>
int main()
{
	int array[50],i,j,n,temp;
	printf("How many numbers are there?\n");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("Ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
