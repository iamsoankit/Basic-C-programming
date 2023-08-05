//WAP to enter 10 integer values from the user and find out the largest number// 
#include<stdio.h>
int main()
{
int a[10],i,n,largest;
printf("\nEnter 10 integer values:");
scanf("%d",&n);
n=10;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
largest=(a[i]>a[i++] || a[i]>a[i--]);
printf("\nThe largest number is %d",largest);
}
return 0;
}
