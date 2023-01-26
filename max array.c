#include<stdio.h>
int main()
{
int n,i,max,a[100];
printf("how many numbers");
scanf("%d",&n);
printf("enter the size of an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&n);
}
max=n[0];
for(i=1;i<n;i++)
{
if(max<n[i])
max=n[i];
}
printf("%d",max);
return 0;
}









