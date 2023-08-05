#include<stdio.h>
int main()
{
int n,sum,i,sum1;
printf("\n Enter the length of array:");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array:");
sum=0;
sum1=0;
for(int i=0; i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
sum=sum+a[i];
if(a[i]%2!=0)
sum1=sum1+a[i];
}
printf("\nThe sum of even elements is:%d",sum);
printf("\nThe sum of odd elements is:%d",sum1);


return 0;
}
