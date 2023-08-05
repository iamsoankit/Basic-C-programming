#include <stdio.h>
struct student 
{
    char name[20];
    int rollno;
    int marks1;
    int marks2;
    int marks3;
}s[100];
int n;
void input()
{
     int n;
     printf("Enter the number of students:");
     scanf("%d",&n);
    
