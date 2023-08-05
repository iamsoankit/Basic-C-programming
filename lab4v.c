#include <stdio.h>
int main()
{
int sec,hr,min,sec1,min1;
printf("Enter the time in seconds:");
scanf("%d",&sec);
sec1=sec%60;
min=sec/60
min1=min%60;
hr=min/60;
printf("The time is %d,hours,%d,minutes,%d,hr,min1,sec1");
return 0;
}

