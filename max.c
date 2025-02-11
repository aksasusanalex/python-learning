#include<stdio.h>
int main()
{
int max=0,min=0,p1=0,p2=0,n,i;
printf("enter the size of the array");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
printf("the array is");
for (i=0; i<n; i++)
	{
		printf("\t %d",a[i]);
	}
min=a[0];
max=a[0];
for (i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			p1=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			p2=i;
		}
	}
printf("\n the maximum value is %d and its position is %d",max,p1);
printf("\nthe minimum value is %d and itsposition is %d\n",min,p2);
return 0;
}
		
