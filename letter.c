#include<stdio.h>
#include<conio.h>
int main() 
{
	char c[50];
	int ct=0,i;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
	if(c[i]>='a'&&c[i]<='z')
	{
		ct++;
	}
	}
	printf("%d",ct);
	return 0;
}
