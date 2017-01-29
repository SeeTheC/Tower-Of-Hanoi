#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
void button(int x=150,int y=110,int height=20,int color=9,char *str="ok",int textcolor=0,int clicked=0)
{

	int x1,y1,x2,y2,len;
	len=strlen(str);

	x1=x-(10*len);
	x2=x+(10*len);
	y1=y-(height/2);
	y2=y+(height/2);

	setfillstyle(1,7);
	bar(x1,y1,x2,y2);



	if(clicked==1)
	{
		setfillstyle(1,8);
		bar(x1,y1,x2-2,y1+3);
		bar(x1,y1,x1+3,y2-2);

	}
	else
	{
		setfillstyle(1,8);
		bar(x1+2,y2,x2,y2-3);
		bar(x2,y1+2,x2-3,y2);


	}

	setfillstyle(1,color);

	bar(x1+2,y1+2,x2-2,y2-2);
	/*
	setcolor(7);
	rectangle(x1+2,y1+2,x2-2,y2-2);
	 */

	setcolor(textcolor);
	settextstyle(8,0,2);
	outtextxy(x-(5*len),y-17,str);

}
/*
void main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\bgi");
       //	button();
	button( 200,400,9,"ok",0,1);
	getch();
	closegraph();
}
*/