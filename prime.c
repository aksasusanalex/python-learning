#include<stdio.h>
int main()
{
int i,j,limit;
printf("enter the limit to be printed");
scanf("%d",&limit);
for (i=2;i<=limit;i++)
	{
	
	 for (j=2;j<=i;j++)
	 {
	 if (i%j==0)
	 {
	 printf("%d",i);
	 }
	 i++;
	 }
	return 0;
	}
}
