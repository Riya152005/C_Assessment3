#include<stdio.h>
int main()
{
	int num,x,y,z;
	printf("Enter 4 digit number:");
	scanf("%d",&num);
	x=num%100;
	y=x/10;
	z=x%10;
	if(y==z)
	printf("Success");
	else
	printf("Failure");	
}
