#include<stdio.h>
#include<conio.h>
void main()
{
int ct=0,i,n;
char c[50];
scanf("%s",&c);
n=strlen(c);
for(i=0;i<n;i++)
{
if(c[i]>='0'&&c[i]<='9')
{
ct++;
}
}
printf("%d",ct);
getch();
}
