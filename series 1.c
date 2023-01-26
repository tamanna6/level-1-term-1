#include<stdio.h>
#include<math.h>
int main()
{
int i,n,sum=0,a;
printf("enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=(pow(10,i)-1);
printf("%d ",a);
sum=sum+a;
}
printf("\n the sum of the terms:%d",sum);
return 0;
}






