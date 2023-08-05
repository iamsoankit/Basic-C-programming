#include<stdio.h>
int main()
{
int a,b,c=0,sum=0,d;
printf("Enter an integer: ");
scanf("%d",&a);
d=a;
while(a!=0)
{
	b=a%10;
	c=c+1;
	a/=10;
}
if(c==3)
{
	while(d!=0)
	{	b=d%10;
		sum=sum+b;
		d/=10;
	}
	printf("The sum of the digits is: %d",sum);
}
else
{
	printf("ENTER A VALID 3 DIGIT INTEGER!!!");
}
return 0;
}
