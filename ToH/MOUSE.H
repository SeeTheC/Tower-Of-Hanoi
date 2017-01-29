#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
union REGS i,o11;
class Mouse
{
	public:
	initmouse()
	{
		i.x.ax=0;
		int86(0x33,&i,&o11);
		return (o11.x.ax);
	}
	void showmouseptr()
	{
		i.x.ax=1;
		int86(0x33,&i,&o11);

	}
	void restrictmouseptr(int x1,int y1,int x2,int y2)
	{
		i.x.ax=7;
		i.x.cx=x1;
		i.x.dx=x2;
		int86(0x33,&i,&o11);

		i.x.ax=8;
		i.x.cx=y1;
		i.x.dx=y2;
		int86(0x33,&i,&o11);

	}
	void getmousepos(int *button,int *x ,int *y)
	{
	      i.x.ax=3;
	      int86(0x33,&i,&o11);
	      *button=o11.x.bx;
	      *x=o11.x.cx;
	      *y=o11.x.dx;
	}
	void hidemouseptr()
	{
		i.x.ax=2;
		int86(0x33,&i,&o11);
	}



};
