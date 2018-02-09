#include<stdio.h>
#include<conio.h>
void main()
{
int i,c=0;
char a[30];
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
c++;
}
}
printf("%d",c);
}
