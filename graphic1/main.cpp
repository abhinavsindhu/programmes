#include<graphics.h>
#include<conio.h>
 main()
{
    int gd=0,gm;
    initgraph(&gm,&gd,"  ");
    circle(200,100,80);
    rectangle(300,50,450,100);
    _getch();
    closegraph();

}
