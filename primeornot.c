#include<stdio.h>

void main()

{
int a,b,c,flag=0;
clrscr();

printf("\nEnter number to find prime or not :");
scanf("%d",&a);

b=a/2;

for(c=2;c<=b;c++)
{
if(c%2==0)
printf("\nNumber is not prime");flag=1; break;

}
if(flag==0) printf("\nNumber is Prime");
getch();

}