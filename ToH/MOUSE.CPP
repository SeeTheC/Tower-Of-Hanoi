#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
union REGS i,o;
class Mouse
{
	public:
	initmouse()
	{
		i.x.ax=0;
		int86(0x33,&i,&o);
		return (o.x.ax);
	}
	void showmouseptr()
	{
		i.x.ax=1;
		int86(0x33,&i,&o);

	}
	void restrictmouseptr(int x1,int y1,int x2,int y2)
	{
		i.x.ax=7;
		i.x.cx=x1;
		i.x.dx=x2;
		int86(0x33,&i,&o);

		i.x.ax=8;
		i.x.cx=y1;
		i.x.dx=y2;
		int86(0x33,&i,&o);

	}
	void getmousepos(int *button,int *x ,int *y)
	{
	      i.x.ax=3;
	      int86(0x33,&i,&o);
	      *button=o.x.bx;
	      *x=o.x.cx;
	      *y=o.x.dx;
	}



};
void main()
{
	int gd,gm;
	int maxx,maxy;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\bgi");
	Mouse m;
	maxx=getmaxx();
	maxy=getmaxy();
	rectangle(0,56,maxx,maxy);
     //	setviewport(1,57,maxx-1,maxy-1,1);
	//m.restrictmouseptr(0,0,maxx-1,maxy-1);
	m.initmouse();
	m.showmouseptr();


	setfillstyle(1,2);
	setcolor(7);
	int i=0;
	int x,y,b;
	rectangle(250,250,300,280);
	settextstyle(1,0,1);
	outtextxy(315,230," ^ ");
	outtextxy(315,280," V ");

	rectangle(320,230,340,250);
	rectangle(320,280,340,300);
	while(!kbhit())
	{
		m.getmousepos(&b,&x,&y);
		while(x>=320&& y>=230&&x<=340&&y<=250 && b==1)
		{

			m.getmousepos(&b,&x,&y);
			gotoxy(10,10);
			if(b==0)
			printf("click:%2d",++i);

		}
		while(x>=320&& y>=280&&x<=340&&y<=300 && b==1)
		{

			m.getmousepos(&b,&x,&y);
			gotoxy(10,10);
			if(b==0)
			printf("click:%2d",--i);

		}



	}


	getch();
	closegraph();

}