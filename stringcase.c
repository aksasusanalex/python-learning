#include<stdio.h>
#include <string.h>
int main()
{
char str[50];
int i,len;
printf("enter the string  \n" );
scanf("%s", str);
len=strlen(str);
for(i=0;i<len;i++)
	{
	if (str[i]>='A'&& str[i]<='Z')
	{
	str[i]=str[i]+32;
	}
        else if (str[i]>='a' && str[i]<='z')
	{
	str[i]=str[i]-32;
	}
	}
printf("%s  \n " ,str);
return 0;
}
