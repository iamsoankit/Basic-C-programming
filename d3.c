#include<stdio.h>
int main()
{
int a,fact=1,i=1;
printf("Enter a number to find its factorial: ");
scanf("%d",&a);
while(i<=a)
{
	fact=fact*i;
	i++;
}
printf("%d",fact);
return 0;
}
