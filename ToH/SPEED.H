#include<iostream.h>
#include<graphics.h>
#include<math.h>


// button(int x=150,int y=110,int width=10,int color=9,char *str="ok",int textcolor=0,int clicked=0)

int clicked=0;
int posy;
int prevmouseposy;
int speedx,speedy;
int speedymin,speedymax;
int speedx1,speedy1,speedx2,speedy2;
int speedmouseptr[4];
Mouse m;

int speedcal()
{
	int a,b;

	posy--;
	a=(speedymax-speedymin);
	b=(((posy-speedymin)*100)/a);
	return 100-b;

}
void init_speed(int x,int y,int *newy,int flag)
{
      speedx=x;
      speedy=y;
      speedx1=x-25;
      speedy1=y-50;
      speedx2=x+25;
      speedy2=y+50;

      speedymin=speedy1+10;
      speedymax=speedy2-10;

      if(flag==0)
      {
	posy=speedy;
      }

      else
	posy=*newy;




}
void speedbase(int x=125,int y=150,int *newy=NULL,int flag=0)
{

	init_speed(x,y,newy,flag);

	setfillstyle(1,15);
	bar(speedx1,speedy1,speedx2,speedy2);

	setfillstyle(1,7);
	bar(speedx1+2,speedy1+2,speedx2-2,speedy2-2);

	//shadow
	setfillstyle(1,8);
	bar(speedx1,speedy2,speedx2,speedy2-3);
	bar(speedx2,speedy1+2,speedx2-3,speedy2);
	//MIDDLE LINE
	setfillstyle(2,8);
	bar((speedx1+speedx2)/2,speedy1+8,(speedx1+speedx2)/2+2,speedy2-8);
	button(speedx,posy,8,9," ",0,0);

}
int speedlevelbar()
{

	  int b,x,y;
	  clicked=1;
	  m.getmousepos(&b,&x,&y);
	  // middle button
	  button(speedx,posy,8,9," ",0,clicked);

	   while(b==1)
	   {
		m.getmousepos(&b,&x,&y);

		if(prevmouseposy>y && posy>=speedymin)
		{
			posy--;
			m.hidemouseptr();
			button(speedx,posy,8,9," ",0,clicked);
		}
		else
		if(prevmouseposy<y&&posy<=speedymax)
		{
			posy++;
			m.hidemouseptr();
			button(speedx,posy,8,9," ",0,clicked);
		}

		setfillstyle(1,8);
		bar(speedx,speedy1+8,speedx+2,posy-4);
		bar(speedx,posy+4,speedx+2,speedy2-8);


		//hiding lines
		setcolor(7);
		line(speedx1+10,posy-4,speedx2-10,posy-4);
		line(speedx1+10,posy+4,speedx2-10,posy+4);


		m.showmouseptr();

		prevmouseposy=y;

	}//end of while
	if(clicked==1)
	{
		clicked=0;
		button(speedx,posy,8,9," ",0,clicked);
	}
	button(speedx,posy,8,9," ",0,0);

	m.showmouseptr();

	return speedcal();
}

int  speedbar(int x3,int y3,int *newy,int flag)
{

	int b,x,y,i;
	int result=-1;

	m.showmouseptr();

	speedbase(x3,y3,newy,flag);
	while(1)
	{
		m.getmousepos(&b,&x,&y);
		if(b==1)
		{
			if(x>=speedx1&&y>=speedy1 &&x<=speedx2&&y<=speedy2)
			{
				if(x>=speedx-(10*strlen(" "))&& y>=posy-4&&x<=speedx+(10*strlen(" "))&&y<=posy+4&& b==1)
				{
					result=speedlevelbar();
					*newy=posy;
				}
			}
			else
				break;

		}
	}
	m.hidemouseptr();
	setfillstyle(1,0);
	bar(speedx1,speedy1,speedx2,speedy2);
	return result;


}