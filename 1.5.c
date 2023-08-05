#include<stdio.h>
#include<string.h>
void anargam(char a[],char b[],int l,int l1)
{
int i,j,m=0,k=0,c[50],h[50];

if(l1!=l)
printf("not anargam");
for(i=65;i<=90;i++)
{
for(j=0;j<l;j++)
{
if(a[j]==(char)i)
{
c[k]=a[j];
k++;
}
}
}
for(i=65;i<=90;i++)
{
for(j=0;j<l;j++)
{
if(b[j]==(char)i)
{
h[m]=a[j];
m++;
}
}
}
for(i=0;i<l;i++)
{
if(c[i]!=h[i])
printf("not anargam");
}
printf("anargam");;
}
int main()
{
char a[50],b[50];
printf("enter 2 strings");
fgets(a,50,stdin);
fgets(b,50,stdin);
int l=strlen(a);
int l1=strlen(b);
anargam(a,b,l,l1);
return 0;
}


