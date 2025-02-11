#include<stdio.h>
int main()
{
int n,i,key,flag;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
printf("\n enter the elements");
for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
printf("the array is");
for (i=0; i<n; i++)
	{
		printf("\t %d",a[i]);
	}
printf("\n enter the key to be searched");
scanf("%d",&key);
for(i=0;i<n;i++)
	{
		if (key==a[i])
		{
		flag=1;
		break;
		}
		
		
	}
if (flag==1)
	{
	printf("\n its  found");
	}
else
	{
	printf("\n its not found\n");
	}


return 0;
}
