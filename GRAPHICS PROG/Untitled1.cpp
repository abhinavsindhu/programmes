#include<graphics.h>
#include<conio.h>
int main()
{ int gd=0,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(100,80,80);

getch();
closegraph();
return 0;

}
