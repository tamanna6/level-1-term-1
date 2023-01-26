#include<stdio.h>
int main()
{
int i,j,n;
printf("upto  the number starting from 1: ");
scanf("%d",&n);
printf("the multiplication table from 1 to%d\n" ,n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
  printf("%d\t",i*j);
  }
printf("\n");
}
return 0;
}








