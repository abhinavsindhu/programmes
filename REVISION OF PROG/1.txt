#include<stdio.h>
#include<math.h>
void main()
{
int n=0,cp,no,f=1,ang=0,re;
  for( no=1;no<1000;no++)
{
  cp=no;
  while(no>0)
  {
  no=no/10;
  n=n+1;
  }
   no=cp;
  while(no>0)
  {

  re=no%10;
  ang=ang+pow(re,n);
  no=no/10;
     }
   f=1;
if(ang==cp)
printf(" %d ",cp);
no=cp;
re=0;
ang=0;n=0;
}


}






