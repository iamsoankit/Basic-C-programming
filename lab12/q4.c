#include<stdio.h>
int main()
{
int n,i,b;

printf("\nEnter the elements of array:");
scanf("%d",&n);

int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the element to search:");
scanf("%d",&b);
for(i=0;i<n;i++)
{
if(b==a[i])
{
printf("\nThe element found is %d",a[i]);
}
return 0;
}
