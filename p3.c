#include<stdio.h>
int SUM(int,int);
int main()
{
	int a,b,c,d;
	printf("enter two numbers:");
	scanf("%d %d %d",&a,&b,&d);
	c=SUM(a,a+20,b+d);
	printf("\n addition of two numbers is %d",c);
	
	return 0;
}
int SUM(int x, int y,int w)
{
	int z;
	z=x+y+w;
	return z;
}
