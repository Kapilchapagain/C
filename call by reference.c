#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=10, b=20;
	printf("Before swapping:a=%d , b=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping:a=%d , b=%d\n",a,b);
return 0;
}

