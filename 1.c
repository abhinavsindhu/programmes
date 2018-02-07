#include<stdio.h>
#include<conio.h>

void main()
{
int n=0,cp,no,f=1,ang=0,re=1,num,loop=1;
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
  num=re;
  while(loop<n)
  {
      re=re*num;
      loop++;
  }
loop=1;
  ang=ang+re;
  no=no/10;
     }

if(ang==cp)
printf(" %d ",cp);
no=cp;
re=0;
ang=0;n=0;
}
_getch();

}






