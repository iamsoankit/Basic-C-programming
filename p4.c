#include<stdio.h>
int swap(int,int);
int main()
{

    int a,b; 
    printf("Input 1st number : ");
    scanf("%d",&a);
    printf("Input 2nd number : ");
    scanf("%d",&b);	
    swap(a,b);
    printf("\nAfter swapping: a = %d, b = %d \n\n",a,b);
    return 0;
}

int swap(int p,int q)
{

    int tmp;
    tmp=p; 
    p=q;   
    q=tmp;
}
