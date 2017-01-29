#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bcircle(int x,int y,int r)
{
	float dp;
	int x1,y1;
	x1=0;
	y1=r;
	dp=(float)3-(2*r);
	while(x1<=y1)
	{

		putpixel(x+x1,y+y1,WHITE);
		putpixel(x+x1,y-y1,WHITE);
		putpixel(x-x1,y+y1,WHITE);
		putpixel(x-x1,y-y1,WHITE);

		putpixel(x+y1,y+x1,6);
		putpixel(x+y1,y-x1,6);
		putpixel(x-y1,y+x1,6);
		putpixel(x-y1,y-x1,6);

		delay(10);
		if(dp<0)
		{
			dp=dp+(4*x1)+6;
			x1++;
		}
		else
		{
			dp=dp+(4*(x1-y1))+10;
			x1++;
			y1--;
		}
	}





}
void bcircle1(int x,int y,int r,int c1,int c2)
{
	float dp;
	int x1,y1;
	x1=0;
	y1=r;
	dp=(float)3-(2*r);
	while(x1<=y1)
	{

		putpixel(x+x1,y+y1,c1);
		putpixel(x+x1,y-y1,c1);
		putpixel(x-x1,y+y1,c1);
		putpixel(x-x1,y-y1,c1);

		putpixel(x+y1,y+x1,c2);
		putpixel(x+y1,y-x1,c2);
		putpixel(x-y1,y+x1,c2);
		putpixel(x-y1,y-x1,c2);

		delay(10);
		if(dp<0)
		{
			dp=dp+(4*x1)+6;
			x1++;
		}
		else
		{
			dp=dp+(4*(x1-y1))+10;
			x1++;
			y1--;
		}
	}





}

void main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\bgi");
	int c1,c2,c3;
	bcircle1(200,200,50,1,6);
	bcircle1(200+80,200,50,1,6);
	bcircle1(200+80+80,200,50,1,6);

	bcircle1(200+80,200+80,50,1,6);
	c1=1;
	c2=6;
	while(!kbhit())
	{
		bcircle1(200,200,50,c1,c2);
		bcircle1(200+80,200,50,c2,c1);
		bcircle1(200+80+80,200,50,c1,c2);
		bcircle1(200+80,200+80,50,c2,c1);
		bcircle1(200+80,200-80,50,c1,c2);
		delay(50);
		c3=c1;
		c1=c2;
		c2=c3;

	}

	getch();
	closegraph();

}