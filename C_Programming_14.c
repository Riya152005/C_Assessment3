#include<stdio.h>
int main()
{
	int num,x,y,z;
	printf("Enter 4 digit number:");
	scanf("%d",&num);
	x=num%100;
	y=num/100;
	if(x==y)
	printf("Success");
	else
	printf("Failure");
}
