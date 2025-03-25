#include<stdio.h>
int numpalidrome(int num)
{
int reminder,orgnumber,revnumber;
orgnumber=num;
revnumber=0;
while(num!=0)
{
reminder=num%10;
revnumber=revnumber*10+reminder;
num=num/10;
}
if (orgnumber==revnumber)
{
return 1;
}
else
{
return 0;
}
}
int main()
{
int num,custom;
printf("enter a number");
scanf("%d",&num);
custom=numpalidrome(num);
if(custom==1){
printf("%d is a palidrome",num);
}
else{
printf("%d not a palidrome",num);
}
return 0;
}
