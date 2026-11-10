#include<stdio.h>
struct student
{
char name[50];
int rollno;
int mark;
char city[50];
char dream[50];
};
void read(struct student s[],int n)
{int i;
for(i=0;i<n;i++)
{
printf("Name:\n");
scanf("%s",s[i].name);
printf("Roll no:\n");
scanf("%",&s[i].rollno);
printf("Marks:\n");
scanf("%d",&s[i].mark);
printf("City:\n");
scanf("%s",&s[i].city);
printf("Dream:\n");
scanf("%s",&s[i].dream);
}
}
void write(struct student s[],int n)
{
int i;
for (i=0;i<n;i++)
{
printf("\n Student %d details\n",i+1);
printf("Name:%s\n",s[i].name);
printf("Roll no:%d\n",s[i].rollno);
printf("Marks:%d\n",s[i].mark);
printf("City:%s\n",s[i].city);
printf("Dream:%s\n",s[i].dream);
}
}
int main()
{
struct student s[100];
int n;
printf("enter the number of students:");
scanf("%d",&n);
if(n<1||n>100)
{
printf("inavild number of students!");
return 1;
}
read(s,n);
write(s,n);
return 0;
}