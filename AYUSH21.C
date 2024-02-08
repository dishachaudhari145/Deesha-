#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,*p,**q;
p=&a;
q=&p;
clrscr();
printf("\n Value of a is %d,Address of a is %u ",a,&a);
printf("\n Through *p,Value of a is %d and Address of a is %u ",*p,p);
printf("\n Through **q,Value of a is %d and Address of a is %u ",**q,*q);
getch();
}

















