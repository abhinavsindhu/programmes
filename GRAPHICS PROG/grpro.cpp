#include<graphics.h>
int main()
{ int gd=0,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(50,90,30);

getch();
closegraph();
return 0;
}
