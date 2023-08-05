#include<stdio.h>
int main()
{
int a,b;
printf("\nEnter any number to store in \"a\" variable:");
scanf("%d",&a);
printf("\nEnter any number to store in \"b\" variable:");
scanf("%d",&b);
printf("\nValue of num = %d",a);
printf("\nAddress of the num = %u",&a);                   
printf("\nValue of num = %d",b);
printf("\nAddress of the num = %u",&b);            
return 0;
}
