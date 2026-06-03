#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter 2 digit number:");
	scanf("%d",&num);
	x=num/10;
	y=num%10;
	if(x!=y)
		printf("Success");
	else
		printf("Failure");
}
