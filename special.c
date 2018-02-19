#include<stdio.h>
int main()
{
char c[40];
int ct=0,i,co=0,cu=0,cn=0;
scanf("%s",&c);

for(i=0;c[i]!='\0';i++)
{
if(c[i]>='0'&&c[i]<='9')
{
	co++;
}
else if(c[i]>='a'&&c[i]<='z')
{
	cu++;
	}
	else if(c[i]==' ')
	{
		cn++;
	}

else
{
	ct++;

}
	
}
printf("%d",ct);
return 0;
}
