#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int rectcolor=15;
int barcolor=15;
int textureflag=0;
void texture(int x1,int y1,int x2,int y2);

/************************color algo***************************/
void bsetcolor(int c)
{
	rectcolor=c;

}
void bsetfillstyle(int s,int c)
{
	barcolor=c;
	textureflag=s;

}
/********************FILLing ALgo******************************/
void scanline(int a[5][2])
{

	int n,i,j,k,gd,gm,dy,dx;
	int x,y,temp;
	int xi[5];
	float slope[20];
	/*-drawing of polygon -*/
	k=0;
	n=4;
	setcolor(barcolor);
	for(i=0;i<n;i++)
	{
		line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
	}
	for(i=0;i<n;i++)
	{
		dy=a[i+1][1]-a[i][1];
		dx=a[i+1][0]-a[i][0];

		if(dy==0) slope[i]=1.0;
		if(dx==0) slope[i]=0.0;

		if((dy!=0)&&(dx!=0)) /*- calculate inverse slope -*/
		{
			slope[i]=(float) dx/dy;
		}
	}

	for(y=0;y<getmaxy();y++)
	{
		k=0;
		for(i=0;i<n;i++)
		{

			if( ((a[i][1]<=y)&&(a[i+1][1]>y))||((a[i][1]>y)&&(a[i+1][1]<=y)))
			{
				xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
				k++;
			}
		}

		for(j=0;j<k-1;j++) /*- Arrange x-intersections in order -*/
		for(i=0;i<k-1;i++)
		{
			if(xi[i]>xi[i+1])
			{
				temp=xi[i];
				xi[i]=xi[i+1];
				xi[i+1]=temp;
			}
		}

		setcolor(barcolor);
		for(i=0;i<k;i+=2)
		{
			line(xi[i],y,xi[i+1]+1,y);
		      //	getch();
		}

	}

}
/*****************************BRESENHAM LINE********************/
int sign(float x)
{
	if(x<0)
		return -1;
	else
	if(x>0)
		return 1;
	return 0;
}
void bline(int x1,int y1,int x2,int y2)
{
	int s1,s2,exchange,x,y,i;
	float dx,dy,g,temp;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	x=x1;
	y=y1;
	s1=sign(x2-x1);
	s2=sign(y2-y1);
	if(dy>dx)
	{
		temp=dx;
		dx=dy;
		dy=temp;
		exchange=1;

	}
	else
		exchange=0;
	g=2*dy-dx;
	i=1;
	while(i<=dx)
	{
		putpixel(x,y,rectcolor);
		while(g>0)
		{
			if(exchange==1)
				x=x+s1;
			else
				y=y+s2;
			g=g-2*dx;
		}
		if(exchange==1)
			y=y+s2;
		else
			x=x+s1;
		g=g+2*dy;
		i++;
	}

}// end of b-line


/**************************RECTANGLE using B-line***************/
void brectangle(int x1,int y1,int x2,int y2)
{

	bline(x1,y1,x2,y1);
	bline(x1,y2,x2,y2);
	bline(x1,y1,x1,y2);
	bline(x2,y1,x2,y2);

}
/*********************BAR ALGO******************************/
void bbar(int x1,int y1,int x2,int y2)
{
	int vertices[5][2];

	vertices[0][0]=x1;
	vertices[0][1]=y1;

	vertices[1][0]=x2;
	vertices[1][1]=y1;

	vertices[2][0]=x2;
	vertices[2][1]=y2;

	vertices[3][0]=x1;
	vertices[3][1]=y2;

	vertices[4][0]=x1;
	vertices[4][1]=y1;


	//filling of the bar
	scanline(vertices);

	if(textureflag==2)
		texture(x1,y1,x2,y2);

}
void texture(int x1,int y1,int x2,int y2)
{
	int i,j;
	int temp;
	if(y1>y2)
	{
		temp=y1;
		y1=y2;
		y2=temp;
	}

	for(j=y1+2;j<y2;j+=4)
	{

		bsetcolor(0);
		for(i=0;i<2;i++)
		{
			if(x1>x2)
				bline(x1+1,j+i,x2-1,j+i);
			if(x1<x2)
				bline(x1,j+i,x2+2,j+i);
		}
	}
}
/*
void main()
{
	int gd,gm;
	clrscr();
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\bgi");


      // setcolor1(13);
	//rectangle1(100,100,200,200);
	setfillstyle1(10,6);
	bar1(200,100,100,200);

	getch();
	closegraph();

}

*/
