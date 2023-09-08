#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int b=5;
	int c=15;
	if(a>b && b<c){
		printf("a is greater than b and b is less than c\n");
	}
	if(a>b || b>c){
		printf("a is greater than b or b is greater than c\n");
	}
	if (!(a==b)){
		printf("a is not equal to b\n");
	}
return 0;
}

