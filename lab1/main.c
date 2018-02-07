#include <stdio.h>
#include <stdlib.h>
int fact(int);
int f=1;
int main()
{int n,fa;
    printf("ENTER THE NO FOR FACTORIAL");
    scanf("%d",&n);
    fa=fact(n);
    printf("THE FACTORIAL IS %d",fa);
        return 0;
}
int fact(int a)
{
    if(a>0)
     {
         f=f*a;
         fact(a-1);
     }
    else
      return f;


}
