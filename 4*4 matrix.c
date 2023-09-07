#include<stdio.h>
#include<conio.h>
int main()
{
	int mat1[4][4],mat2[4][4],sum[4][4];
	int i,j;
	printf("Enter first matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter second matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("Sum of two matrices:\n4");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	
	
return 0;
}

