#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,t1=0,t2=1,nt;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",t1);
nt=t1+t2;
t1=t2;
t2=nt;
}
return o;
}
