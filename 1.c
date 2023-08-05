#include<stdio.h>
struct student
{
char name[100];
int roll;
int sec;
int marks;
int dob;
};
void main()
{
struct student s[100];
int i,j,n;
printf("enter the number of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s %d %d %d %d",s[i].name,&s[i].roll,&s[i].sec,&s[i].marks,&s[i].dob);
}
for(j=0;j<n;j++)
{
printf("%s %d %d %d %d",s[j].name,s[j].roll,s[j].sec,s[j].marks,s[j].dob);
}

}

