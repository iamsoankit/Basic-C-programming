#include<stdio.h>
int main()
{
int a=0,count=1;
while(count<=15)
{
	a=a+count;
	count+=2;
}
printf("%d",a);
return 0;
}
