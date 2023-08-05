#include<stdio.h>
long int fact(int);
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("\n %d!=%ld\n",n,fact(n));
	return 0;
}

long int fact(int n)
{
	long int f=1;
	int i;
	for(i=1;i<=n;i++)
	f=f*i;
	return(f);
}
