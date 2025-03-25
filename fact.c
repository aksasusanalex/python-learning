#include<stdio.h>
int factorial(int x);
int main()
{
int num,result,x;
printf("enter the number");
scanf("%d",&num);
result=factorial(num);
printf("the factoraial is %d",result);
return 0;
}
int factorial(int x)
{
int fact=1,num,i;
for(i=1 ;i<=x;i++)
	{
	fact=fact*i;
	
	}
return fact;
}

