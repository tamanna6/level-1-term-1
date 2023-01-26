#include<stdio.h>
int main()
{
int i,n;
double sum=0;
printf("enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{

printf("1/%d+",i);
sum=sum+(double)1/i;

}
printf("\n the sum of the series upto %d terms:%lf",n,sum);
return 0;

}


