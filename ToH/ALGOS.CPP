#include<math.h>
#include<dos.h>
#include<graphics.h>

void ddarect(int,int,int,int,int);
void ddaline(float,float,float,float,int);
void bresenhamline(float,float,float,float,int);
void dcircle1(int,int,int,int);
void dcircle2(int,int,int,int);
void bcircle(int,int,int,int);


void ddarect(int left,int top,int right,int bottom,int col)
{
	ddaline(left,top,right,top,col);
	ddaline(right,top,right,bottom,col);
	ddaline(right,bottom,left,bottom,col);
	ddaline(left,bottom,left,top,col);
}
int sign(int x)
{

if(x<0)
	return -1;
else
	return 1;
}
//Function for dda line
void ddaline(float x1,float y1,float x2,float y2,int col)
{
	float dx,dy,length,x,y,i=1;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	if(dx>=dy)
		length=dx;
	else
		length=dy;
	dx=(x2-x1)/length;
	dy=(y2-y1)/length;
	x=x1+0.5*sign(dx);
	y=y1+0.5*sign(dy);
	while(i<=length)
	{
		putpixel(x,y,col);
		x=x+dx;
		y=y+dy;
		i++;
	}
}
//Function for bresenham line
void bresenhamline(float x1,float y1,float x2,float y2,int col)
{
float dx,dy,temp,x,y,i;
float exchange,s1,s2,e;
x=x1;
y=y1;
dx=abs(x2-x1);
dy=abs(y2-y1);
s1=sign(x2-x1);
s2=sign(y2-y1);
if(dy>dx)
{
	temp=dy;
	dy=dx;
	dx=temp;
	exchange=1;
}
else
{
	exchange=0;
}
e=2*dy-dx;
i=1;
while(i<=dx)
{
	putpixel(x,y,col);
	delay(5);
	while(e>=0)
	{
		if(exchange==1)
			x=x+s1;
		else
			y=y+s2;
		e=e-2*dx;
	}
	if(exchange==1)
		y=y+s2;
	else
		x=x+s1;
	e=e+2*dy;
	i=i+1;
}
}
//Function for dda circle
void dcircle1(int x,int y,int r,int col)
{
int i,x1,y1;
for(i=0;i<=360;i++)
{
	x1=x+(r*cos(i));
	y1=y+(r*sin(i));
	putpixel(x1,y1,col);

}
}
//Function for dda circle
void dcircle2(int x3,int y3,int r,int col)
{
	float x1,y1,x2,y2,E;
	int i=0,v;
	int start_x,start_y;
	x1=r*cos(0);
	y1=r*sin(0);
	start_x=x1;
	start_y=y1;
	do
	{
		v=pow(2,i);
		i++;

	}while(v<r);
	E=1/(pow(2,i-1));
	do
	{
		x2=x1+(E*y1);
		y2=y1-(E*x2);
		putpixel(x3+x2,y3+y2,col);
		x1=x2;
		y1=y2;
	}while((y1-start_y)<E||(start_x-x1)>E);

}
//Function for bresenham circle
void bcircle(int x1,int y1,int r,int col)
{
	int d,i,x,y;
	d=3-(2*r);
	x=0;
	y=r;
	do
	{
		delay(50);
		putpixel(x1+x,y1+y,col);
		putpixel(x1-x,y1+y,col);
		putpixel(x1+x,y1-y,col);
		putpixel(x1-x,y1-y,col);
		putpixel(x1-y,y1+x,col);
		putpixel(x1+y,y1-x,col);
		putpixel(x1-y,y1-x,col);
		putpixel(x1+y,y1+x,col);
		if(d<0)
			d=d+(4*x)+6;
		else
		{
			d=d+(4*(x-y))+10;
			y=y-1;
		}
		x=x+1;
	}while(x<y);
}















