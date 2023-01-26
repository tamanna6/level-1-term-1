#include<stdio.h>
int main()
{
int i,count=0,n;
printf("enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
count++;

}
if(count==2)
printf("prime number");
else
printf("not prime");




return 0;
}
