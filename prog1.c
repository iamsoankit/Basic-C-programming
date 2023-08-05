#include<stdio.h>
int main()
{
int a;
printf("\nEnter any number to store in \"a\" variable:");
scanf("%d",&a);
printf("\nValue of num = %d",a);
printf("\nAddress of the num = %u",(&a));                               
return 0;
}    
