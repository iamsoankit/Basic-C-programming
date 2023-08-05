#include<stdio.h>
int main()
{
int n;
printf("\n Enter the length of array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array:");
for(int i=0; i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=1;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
