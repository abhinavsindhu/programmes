#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,n,d,r=0,ang=0,cp,re,no;
    printf("ENTER THE RANGE YOU WANT TO UPTO ");
    scanf("%d",&n);
    for(i=153;i<=n;i++)
    { cp=i;
      d=0;
      ang=0;
        while(cp>0)
    {
        r=cp%10;
        cp=cp/10;
        d++;
    }
    cp=i;
       while(cp!=0)
       {  re=cp%10;
          ang=ang+pow(re,d);
          cp=cp/10;

       }
      if(ang== i)
      {
          printf(" %d",ang);
      }
    }
    return 0;
}
