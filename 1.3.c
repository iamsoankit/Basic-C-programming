#include<stdio.h>
void dec_bin(int n)
{
int b=0,d,p=1;
while(n>0)
{
d=n%2;
b=b+(d*p);
n=n/2;
p=p*10;
}
printf("binary %d",b);
}
int main()
{
int n;
printf("enter a decimal number");
scanf("%d",&n);
dec_bin(n);
return 0;
}
