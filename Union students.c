#include<stdio.h>
#include<conio.h>
union student
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	union student s;
	s.roll=1;
	printf("\nRoll no:%d",s.roll);
	s.marks=90;
	printf("\nMarks:%.2f",s.marks);
return 0;
}

