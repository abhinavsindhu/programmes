#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=36,i=2;
    while(n>0)
          {
              if(n%i==0)
            {
                printf(" %d  ",i);

                n=n/i;
            }
             else
                i=i+1;
          }
    return 0;
}
