#include<stdio.h>
int main()
{
int row,col,c=1;

for(row=1;row<=4;row++)
{
   for(col=1;col<=row;col++)
   {
     printf("%d ",c);
     c++;

   }
   printf("\n");


}
return 0;
}





