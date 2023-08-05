#include<stdio.h>
struct number
{
int real;
int imag;
};

void num(int a,int b,int c,int d )
{
int s,p;
s=a+b;
p=c+d;
printf("%d",s);
printf("%d",p);
}
void main()
{
struct number n1;
struct number n2;
printf("enter the first no.");
scanf("%d %d",&n1.real,&n1.imag);
printf("enter the second no.");
scanf("%d %d",&n2.real,&n2.imag);
num(n1.real,n2.real,n1.imag,n2.imag);
}

