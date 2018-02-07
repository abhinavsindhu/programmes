#include <stdio.h>


 main()
{int n,s=0,c=1;
printf("ENTER A NO\n");
scanf("%d",&n);
while(n>=c)
{
    if(n%c==0)
    s=s+1;
    c=c+1;
}

if(s==2)
    printf("PRIME NO");
else
    printf("NOT A PRIME NO");


}
