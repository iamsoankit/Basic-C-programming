#include<stdio.h>
int SUM(int,int);
int main()
{
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	c=SUM(a,b);
	printf("\n addition of two numbers is %d",c);
	
	return 0;
}

int SUM(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

