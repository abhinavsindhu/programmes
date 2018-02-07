#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,c=0,n;
printf("ENTER THE RANGE YOU WANT TO PRINT UPTO ");
scanf("%d",&n);
for(i=1;i<n;i++)
   {
    for(j=1;j<=i;j++)
     {
       if(i%j==0)
       c++;
     }
     if(c==2)
       printf("%d ",i);
      c=0;
   }
   return 0;
}
