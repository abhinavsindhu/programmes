#include<math.h>
#include<stdio.h>

int main()
{int n=0,no,cp,r,ans=0;
    printf("ENTER A NO\n");
    scanf("%d",&no);
    cp=no;
    while(no>0)
    {
        no=no/10;
        n=n+1;
    }
    no=cp;
    while(cp>0)
    {
        r=cp%10;
        ans=ans+pow(r,n);
        cp=cp/10;

    }
1
    if(ans==no)
        printf("ANGSTROM NUMBER");
    else
        printf("NOT A ANGSTROM NUMBER");
    return 0;
}
