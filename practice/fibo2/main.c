#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=0,b=1,c,n;
   printf("ENTER THE RANGE UPTO WHICH YOU WANT TO PRINT FIBBONACI SERIES\n");
   scanf("%d",&n);
   printf("%d %d ",a,b);
   c=a+b;
   while(c<=n)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }
    return 0;
}
