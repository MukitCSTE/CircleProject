#include <stdio.h>
#include <iostream>

#include <graphics.h>



int spiral(int off)
{
	int angle=180,r=1;//radius initialization
	while(r<300)
	{
		int j=5;
		delay(20);
		while(j)
		arc(300+(j--)+off,250,(angle-11)%360,angle%360,r);//angular increaes 
		r+=1;// radious increases
		angle=angle-11;
	}
}
int main()
{
	int gdriver=DETECT,gmode;
	int r=2;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	setcolor(2);//first circle colour
	spiral(0);
	setcolor(RED);//second circle colour
	spiral(5);
	setcolor(2);//third circle colour
	spiral(10);
	setcolor(WHITE);//out textcolour
	outtextxy(450,450,"I LOVE u  BANGLADESH");//out text
	getch();
	closegraph();
}
