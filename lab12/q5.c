#include<stdio.h>
int main()
{
int i,n;
printf("\nEnter the number of elememts:");
scanf("%d",&n);
int a[n];
printf("\n The values of elements:");
for(i=0;i<n;i++)

scanf("%d",&a[i]);

for(i=n-1;i>=0;i++)

printf("\n %d",a[i]);
return 0;
}
