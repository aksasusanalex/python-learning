#include<stdio.h>
int main()
{
int r1,r2,c1,c2,result[10][10],a[10][10], b[10][10];
printf("enter the number of rows and columns in first matrix");

scanf("%d%d",&r1,&c1);

printf("enter the number of rows and columns in second matrix");

scanf("%d%d",&r2,&c2);

if (r1==r2 &&c1==c2)
	{
	printf("enter the elements in first matrix \n");
	for (int i=0;i<r1;i++)
		{
		for (int j=0;j<c1;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	printf("the  first matrix is:\n");
	for (int i=0;i<r1;i++)
		{
		for (int j=0;j<c1;j++)
			{
			printf("%d \t",a[i][j]);
			}
		 printf("\n");
		}
	printf("enter the elements in second matrix \n");
	for (int i=0;i<r2;i++)
		{
		for (int j=0;j<c1;j++)
			{
			scanf("%d ",&b[i][j]);
			}
		}
	printf("the  second matrix is: \n");
	for (int i=0;i<r2;i++)
		{
		for (int j=0;j<c2;j++)
			{
			printf("%d \t",b[i][j]);
			}
		printf("\n");
		}
	for (int i=0;i<r2;i++)
		{
		
		for (int j=0;j<c2;j++)
			{
			result[i][j]=a[i][j]+b[i][j];
			}
		}
	printf("the  sum of matrix is:\n");
	for (int i=0;i<r2;i++)
		{
		for (int j=0;j<c2;j++)
			{
			printf("%d \t",result[i][j]);
			}
		printf("\n");
		}
	}
	
	
else
	{
	printf("\n the matrix is invalid \n");
	}
return 0;
}
			
			
