#include<stdio.h>
#include<conio.h>
#define rows 3
#define cols 3
void transpose(int matrix[rows][cols])
{
	int i,j,temp;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			temp=*(*(matrix+i)+j);
			*(*(matrix+i)+j)=*(*(matrix+j)+i);
			*(*(matrix+j)+i)=temp;
		}
	}
}
int main()
{
	int matrix[rows][cols];
	int i,j;
	printf("Enter the matrix elements:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Original matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	transpose(matrix);
	printf("Transposed matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
return 0;
}

