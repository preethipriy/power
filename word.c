#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=1;
char a[30];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("%d",c);
}
