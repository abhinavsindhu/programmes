#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm," ");
    ellipse(250,240,0,360,150,150);
    getch();
    closegraph();
    return 0;
}
