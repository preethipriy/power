#include<stdio.h>
#include<conio.h>
void main()
{
char c[40];
int ct=1,i;
scanf("%s",&c);
for(i=0;c[i]!='0';i++)
{
if(c[i]=='.')
{
ct++;
}
}
printf("%d",ct);
}
