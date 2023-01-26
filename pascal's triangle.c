#include<stdio.h>
int main()
{
int n,i,j,a[50][50],k;
printf("input number of rows:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(j==0||i==j)
    a[i][j]=1;
    else if (j>i)
    a[i][j]=0;
    else
    a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
}
for(i=0;i<n;i++)
{
  for(k=0;k<n-i;k++)
  printf(" ");
  for(j=0;j<n;j++)
  {
   if(j<=i)
   printf("%4d",a[i][j]);
   }
   printf("\n");
   }
   return 0;
   }




