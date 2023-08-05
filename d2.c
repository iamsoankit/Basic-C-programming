#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter 3 integers: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
	d=a;
}
else if(a==b)
{
	d=a;
}
else
{
	d=b;
}
if(d>c)
{
	printf("%d is the largest among the three.",d);
}
else if(d==c)
{
	printf("%d is the largest among the three.",d);
}
else
{
	printf("%d is the largest among the three.",c);
}
return 0;
}
