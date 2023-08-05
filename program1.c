/*WAP to perform the subtraction of two integers and display the result */
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter two numbers to subtract :");
	scanf("%d%d",&a,&b);
	c = a - b;
	printf("\n The subtraction of %d and %d is %d",a,b,c);
	return 0;
}
