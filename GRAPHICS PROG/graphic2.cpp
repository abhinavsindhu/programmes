#include<graphics.h>

  main()
{

    initwindow(1000,800,"SATVIR SINDHU");
    setcolor(1);
    circle(200,100,80);
    rectangle(300,50,450,100);
    setcolor(2);
    line(300,200,450,400);
    line(450,400,300,400);
    line(300,200,300,400);
    line(300,400,150,400);
    line(300,200,150,400);
    setcolor(3);
    ellipse(500,500,0,360,200,100);
    getch();
    closegraph();

}
