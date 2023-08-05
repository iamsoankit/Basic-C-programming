#include<stdio.h>
int main()
{
int t,a,hour=0,min=0,sec=0;
printf("Enter a time in seconds: ");
scanf("%d",&t);
t=a;
hour=t/3600;
min=(t-hour*3600)/60;
sec=t-hour*3600-min*60;
printf("The above given time is: %d  hours %d minutes %d seconds",hour,min,sec);
return 0;
}
