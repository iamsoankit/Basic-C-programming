#include<stdio.h>
int main()
{
int n,rev,i,temp;
printf("\nEnter the length of elements:");
scanf("%d",&n);
int a[n];
printf("\nEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
printf("\n The rev elements are:%d",a[i]);
return 0;
}
