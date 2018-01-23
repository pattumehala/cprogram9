#include<stdio.h>
int main()
{
int n,i=0,num=0;
printf("Enter the value of n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
num=num+1;
break;
}
}
if(num==1)
{
printf("It is not a prime number");
}
else
{
printf("It is a prime number");
}
return 0;
}
