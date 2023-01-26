#include<stdio.h>
int main()
{
int n=45863;
int sum=0;
for( ;n>=1; )
{
 sum=sum+n%10;
 n=n/10;
 }
 printf("%d",sum);
 return 0;
 }







