#include<stdio.h>
void largest(int a[],int l)
{
int i;
for(i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
for(i=0;i<l;i++)
{
if(a[i]>max)
max=a[i];
}
printf("maximum %d",max);
}
int main()
{
int a[100],l;
printf("enter the no. of elements");
scanf("%d",&l);
largest(a,l);
return 0;
}
