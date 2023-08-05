#include<stdio.h>
int main()
{
int a,b;
printf("Enter two integers: ");
scanf("%d %d",&a,&b);
printf("Before swapping the two numbers a and b are: %d %d respectively.\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping the two numbers are, a=%d and b=%d",a,b);
return 0;
}
