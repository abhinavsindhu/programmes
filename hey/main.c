#include<stdio.h>
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

  while(no>0)
  {

  re=no%10;

   while(n>0)
     {
      f=f*re;
      n=n-1;
      }
  ang=ang+f;
  no=no/10;
     }
   f=1;
   no=cp;
   n=0;
if(ang==cp)
printf(" %d ",cp);
ang=0;
}


}






