#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,c=0,n=1000;
 for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
     {
      if(i%j==0)
        c++;

     }
 if(c==2)
    printf(" %d ",i);
    c=0;
}
    return 0;
}
