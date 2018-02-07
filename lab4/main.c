#include <stdio.h>
#include <stdlib.h>
void prinpri(int a)
{ int c,i,j;
    for(i=1;i<=a;i++)
    { c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c=c+1;
         }
         if(c==2)
         {
             printf(" %d",i);
         }

    }
}

int main()
{
    int n;
    printf("ENTER A No UPTO WHICH");
    scanf("%d",&n);
    prinpri(n);

    return 0;
}
