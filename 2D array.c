#include<stdio.h>
int main()
{
int i,j;
char a[4][2]={3, 2,
         4, 6,
         5, 8,
         7, 9};




for(i=0;i<4;i++)
{
for(j=0;j<2;j++)
{
printf("%d",a[i][j]);
}

printf("\n");
}

return 0;

}
