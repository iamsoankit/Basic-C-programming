#include <stdio.h>
struct pkt{  //structure name
char ch1;
char ch2;
char ch3;
};
int main(){
int number;
struct pkt packet;  //object of the structure
printf("enter a three digit number");
scanf("%d" , &number);
packet.ch3= number % 10;
packet.ch2 = (number/ 10) % 10;
packet.ch3= (number/ 100) % 10;

printf("contents of the number are\n");
printf("ch1: %d\n", packet.ch1);
printf("ch2: %d\n" , packet.ch2);
printf("ch: %d\n" , packet.ch3);
int originalnum = packet.ch1*100 + packet.ch2*10 + packet.ch3;
printf("originalnum %d\n" , originalnum);
return 0;
}

