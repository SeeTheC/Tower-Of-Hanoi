#define ESC 0x1b
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>

#include"cgfinal/algo.h"
#include"cgfinal/thankyou.h"
#include"cgfinal/button.h"
#include"cgfinal/ellipse.h"
#include"cgfinal/mouse.h"
#include"cgfinal/stack.h"
#include"cgfinal/speed.h"
#include"cgfinal/cong.h"


#define width 5
#define  min 20
#define height 150
#define incrad 10
#define diff 200
#define ESC 0x1b

/*
void  rotate(int x1,int y1,int rx,int ry,int endx,int endy,int color,int speed)
	center=x1,y1 radius=rx,ry

button(int x=150,int y=110,int width=20,int color=9,char *str="ok",int textcolor=0,int clicked=0)

*/
int speed=50,prevspeed=50;
int newy;// use in speed
int rod=2;
int base1[]={20,300,170,320};
int base2[]={250,300,350+50,320};
int base3[]={400+80,300,550+80,320};
int x[3],y[3];
int m_b,m_x,m_y;
int no_of_rings=3;
int choice;
int randflag=0;
static int speedflag;
int selected[2]={-1,-1},sel_count=0,prev[2]={-1,-1},sel=0;

void rings();
void tower();
void check();
void move();
void init_button();
void automatic(int n);
int  iscompleted();
void init_tower();
void clearstack();
void boundry();
void clearstack();
void newgame();
void statusbar(char *,int );
void reset();
void randomize_ring();

stack st[3],yt[3],temp,col[3],tempcol,tempcol1;


void randomize_ring(void)
{
   int array[20],i,j;
   int radius;
   int tr=0;
   int c[3]={0,0,0};
   int mc=-1;
   int t_y,color,sp,endy;
   randomize();
   radius=min;
   sp=10;

   boundry();
   for(i=0;i<no_of_rings;i++)
   {
	tr=random(3);
	array[i]=tr;
	c[tr]++;

   }
   if(c[0]==0)
	mc=0;
   else
   if(c[1]==0)
	mc=1;
   else
    if(c[2]==0)
	mc=2;
    else
	mc=-1;
    if(mc!=-1)
    {
	array[0]=mc;
    }

    initcolorstack();

   for(i=0;i<no_of_rings;i++)
   {
		temp.push(radius);
		radius=radius+incrad;
   }
   j=0;
   color=2;
   for(i=0,j=0;!temp.isempty();i+=10,j++)
   {
		color=tempcol1.top();
		if(yt[array[j]].isempty())
		{
			t_y=base1[1]-5;

		}
		else
		    t_y=yt[array[j]].top()-10;

		yt[array[j]].push(t_y);

		radius=temp.top();
		rotate(1,x[array[j]],0,radius,5,x[array[j]],base1[1]-height,color,sp+10);
		t_y=base1[1]-height;
		endy=yt[array[j]].top();

		while(t_y<endy)
		{

			setfillstyle(1,color);
			setcolor(0);
			fillellipse(x[array[j]],t_y,radius,5);

			bsetfillstyle(rod,6);
			bbar(x[array[j]],base1[1]-height,x[array[j]]+width,endy);

			setfillstyle(1,0);
			setcolor(0);
			fillellipse(x[array[j]],t_y,radius,5);

			t_y+=sp;

		}
		setfillstyle(1,color);
		fillellipse(x[array[j]],yt[array[j]].top(),temp.top(),5);

		col[array[j]].push(color++);
		st[array[j]].push(temp.top());
		temp.pop();
		tempcol1.pop();

	}





}
int hflag=0;
char key;
void tower_of_hanoi(int n, int LEFT, int RIGHT,int CENTER,int a)
{
	boundry();
	if(a==0)
	{
		if(kbhit() && hflag==0)
		{

			hflag=1;

		}
	}
	if(a==1)
	{
		if(key==ESC&& hflag==0)
		{

			hflag=1;
		}
	}

	if(n>0&& hflag==0)
	{
		tower_of_hanoi(n-1, LEFT, CENTER, RIGHT,a);

		 if(hflag==0)
		 {

			 selected[0]=LEFT;
			 selected[1]=RIGHT;
			 move();
		 }

		 if(a==1 && hflag==0)
			key=getch();
		 tower_of_hanoi(n-1, CENTER, RIGHT, LEFT,a);
	}
}

void automatic(int a)
{
	cleardevice();
	hflag=0;
	key='a';
	boundry();
	clearstack();
     //	no_of_rings=n;
	tower();
	init_tower();
	bsetfillstyle(1,6);
	bbar(10,420,getmaxx()-5,420+20);
	settextstyle(2,0,6);
	if(a==1)
	{
		setcolor(9);
		outtextxy(getmaxx()-450,400-20,"SPACE to Move the Ring");

	}
	setcolor(15);
	outtextxy(getmaxx()-250,420+2,"PRESS ESC TO GO BACK");
	tower_of_hanoi(no_of_rings,1,2,3,a);

	getch();
	clearstack();
}

int iscompleted()
{
	int len;
	if(choice!=2)
	{
		if(st[0].isempty())
		{
			if(st[1].length()==no_of_rings || st[2].length()==no_of_rings )
				return 1;

		}
	}
	else
	{

		if(st[0].length()==no_of_rings||st[1].length()==no_of_rings || st[2].length()==no_of_rings )
			return 1;

	}

	return 0;


}
void check()
{

	if(selected[0]==selected[1] && selected[0]!=-1)
		selected[0]=selected[1]=-1;
	else
	if((sel==selected[0] && selected[1]==-1)||(sel==selected[1] && selected[0]==-1))
			selected[0]=selected[1]=-1;

	else
	if(selected[0]!=-1 && selected[1]!=-1)
	{

		if(sel==selected[0])
			selected[0]=-1;
		else
		if(sel==selected[1])
			selected[1]=-1;

	}
	else
	{
		if(selected[0]==-1 && sel!=0)
		{
			selected[0]=sel;
		}
		else
		if(selected[1]==-1 && sel!=0)
			selected[1]=sel;
	}
	sel=0;

}
void tower()
{

	int c1,c2,c3;
	gotoxy(2,2);
	c1=c2=c3=6;



	switch(selected[0])
	{
		case 1: c1=4;
			break;

		case 2: c2=4;
			break;

		case 3: c3=4;
			break;
	}
	switch(selected[1])
	{
		case 1: c1=7;
			break;

		case 2: c2=7;
			break;

		case 3: c3=7;
			break;
	}
	bsetfillstyle(2,c1);
	bbar(base1[0],base1[1],base1[2],base1[3]);//base1
	setcolor(5);
	settextstyle(1,0,1);
	outtextxy((base1[0]+base1[2])/2,base1[1]+25,"A");

	bsetfillstyle(2,c2);
	bbar(base2[0],base2[1],base2[2],base2[3]);//base2
	setcolor(5);
	outtextxy((base2[0]+base2[2])/2,base1[1]+25,"B");

	bsetfillstyle(2,c3);
	bbar(base3[0],base3[1],base3[2],base3[3]);//base3
	setcolor(5);
	outtextxy((base3[0]+base3[2])/2,base1[1]+25,"C");


	x[0]=((base1[0]+base1[2])/2)-5;
	y[0]=(base1[1]+base1[3])/2;

	x[1]=(base2[0]+base2[2])/2;
	y[1]=(base2[1]+base2[3])/2;

	x[2]=(base3[0]+base3[2])/2;
	y[2]=(base3[1]+base3[3])/2;

	bsetfillstyle(rod,c1);
	bbar(x[0],base1[1],x[0]+width,base1[1]-height);

	bsetfillstyle(rod,c2);
	bbar(x[1],base2[1],x[1]+width,base2[1]-height);

	bsetfillstyle(rod,c3);
	bbar(x[2],base3[1],x[2]+width,base3[1]-height);

	rings();
}
void move()
{
	int radius;
	int color,endx;//endx for rotation;
	int t_y,starty;
	int top,endy;
	int rev;// for  reverse rotation

	char str1[200],str2[2];
	if(selected[0]!=-1 && selected[1]!=-1)
	{

		if(!st[ selected[0]-1 ].isempty())
		{
			if( ( st[ selected[1]-1 ].isempty() ) ||( st[ selected[1]-1 ].top()>st[ selected[0]-1 ].top() ) )
			{

				strcpy(str1,"Moved from : ");
				str2[0]=selected[0]+64;
				str2[1]='\0';
				strcat(str1,str2);
				strcat(str1,"-->");

				str2[0]=selected[1]+64;
				str2[1]='\0';
				strcat(str1,str2);

				statusbar(str1,2);

				radius=st[ selected[0]-1 ].top();
				st[ selected[0]-1 ].pop();

				t_y=yt[ selected[0]-1 ].top();
				yt[ selected[0]-1 ].pop();
				starty=t_y;

				color=col[selected[0]-1 ].top();
				col[ selected[0]-1].pop();


				while(t_y>=base1[1]-height)
				{


					setfillstyle(1,color);
					setcolor(0);
					fillellipse(x[selected[0]-1],t_y,radius,5);
					//piller
					bsetfillstyle(rod,6);
					bbar(x[selected[0]-1],starty+5,x[selected[0]-1]+width,base1[1]-height);

					setfillstyle(1,0);
					setcolor(0);
					fillellipse(x[selected[0]-1],t_y,radius,5);

					t_y-=speed;
				}
				// black the previous image
				setfillstyle(1,0);
				fillellipse(x[selected[0]-1],t_y++,radius,5);

				rotate(1,x[selected[0]-1],t_y,radius,5,x[selected[1]-1],t_y,color,speed);
				setcolor(0);

				setfillstyle(1,0);
				fillellipse(x[selected[1]-1],t_y,radius,5);
				/*
				pushing it into the another stack;
				*/
				st[selected[1]-1].push(radius);

				if(yt[selected[1]-1].isempty())
				{
					yt[selected[1]-1].push(base1[1]-5);
				}
				else
				{
					top=yt[selected[1]-1].top();
					yt[selected[1]-1].push(top-10);
				}
				col[selected[1]-1].push(color);
				/*****************************************************/
				t_y=base1[1]-height;

				endy=yt[selected[1]-1].top();

				while(t_y<endy)
				{

					setfillstyle(1,color);
					setcolor(0);
					fillellipse(x[selected[1]-1],t_y,radius,5);

					bsetfillstyle(rod,6);
					bbar(x[selected[1]-1],base1[1]-height,x[selected[1]-1]+width,endy);

					setfillstyle(1,0);
					setcolor(0);
					fillellipse(x[selected[1]-1],t_y,radius,5);

					t_y+=speed;

				}




			}
			else
			{
			 if( st[ selected[1]-1 ].top()<st[ selected[0]-1 ].top() )
			 {
				strcpy(str1,"Cant Move as Tower ");
				str2[0]=selected[0]+64;
				str2[1]='\0';
				strcat(str1,str2);
				strcat(str1," ring is Bigger than");
				strcat(str1,"--> Tower");
				str2[0]=selected[1]+64;
				str2[1]='\0';
				strcat(str1,str2);

				statusbar(str1,14);


			}
			}
		}
		else
		{
			strcpy(str1,"Cant Move As Tower ");
			str2[0]=selected[0]+48;
			str2[1]='\0';
			strcat(str1,str2);
			strcat(str1," is Empty");

			statusbar(str1,14);
		}
	}
	if(selected[0]!=-1&&selected[1]!=-1)
	{
		selected[0]=-1;
		selected[1]=-1;
		tower();
	}

}
void rings()
{

	int n;
	int i,j;
	int t_y;
	int radius;

	setcolor(0);
	for(j=0;j<3;j++)
	{
		while(!st[j].isempty())
		{

			setfillstyle(1,col[j].top());
			fillellipse(x[j],yt[j].top(),st[j].top(),5);

			tempcol.push(col[j].top());
			temp.push(st[j].top());
			col[j].pop();
			yt[j].pop();
			st[j].pop();

		}
		for(i=0;!temp.isempty();i+=10)
		{
			t_y=base1[1]-i-5;
			yt[j].push(t_y);
			col[j].push(tempcol.top());
			st[j].push(temp.top());
			temp.pop();
			tempcol.pop();
		}
	}

}
class but
{
	public:
		int x;
		int y;
		int color;
		char text[10];
}b[5];



void init_button()
{

	int n=3;
	if(choice!=2)
	{
		b[0].x=210;b[0].y=350;strcpy(b[0].text,"Speed");
		b[1].x=330;b[1].y=400;strcpy(b[1].text,"Back");
		b[2].x=440;b[2].y=350;strcpy(b[2].text,"Reset");

	}
	else
	{
		b[0].x=330;b[0].y=350;strcpy(b[0].text,"Speed");
		b[1].x=330;b[1].y=400;strcpy(b[1].text,"Back");

	}

	if(choice!=2)
		n=3;
	else
		n=2;
	for(int i=0;i<n;i++)
			button(b[i].x,b[i].y,20,9,b[i].text,14,0);


}
void input_rings()
{
	cout<<"\nEnter the no. of rings";
	cin>>no_of_rings;
	cleardevice();

}
void init_tower()
{

	int radius;
	int i,j,t_y;
	int color;
	int sp,endy;
	radius=20;
	setcolor(0);
	color=2;
	sp=10;
	initcolorstack();
	for(i=0;i<no_of_rings;i++)
	{
		temp.push(radius);
		radius=radius+incrad;
	}


	for(i=0;!temp.isempty();i+=10)
	{
		color=tempcol1.top();

		t_y=base1[1]-i-5;
		yt[0].push(t_y);

		radius=temp.top();
		rotate(1,x[0],0,radius,5,x[0],base1[1]-height,color,sp+10);
		t_y=base1[1]-height;
		endy=yt[0].top();

		while(t_y<endy)
		{

			setfillstyle(1,color);
			setcolor(0);
			fillellipse(x[0],t_y,radius,5);

			bsetfillstyle(rod,6);
			bbar(x[0],base1[1]-height,x[0]+width,endy);

			setfillstyle(1,0);
			setcolor(0);
			fillellipse(x[0],t_y,radius,5);

			t_y+=sp;

		}
		setfillstyle(1,color);
		fillellipse(x[0],yt[0].top(),temp.top(),5);
	     //	fillellipse(x[1],t_y,temp.top(),2);
	    //	fillellipse(x[2],t_y,temp.top(),2);

		col[0].push(tempcol1.top());
		tempcol1.pop();
		st[0].push(temp.top());
		temp.pop();

	}

}
//stacks used st[3],yt[3],temp,col[3],tempcol;

void clearstack()
{

	for(int i=0;i<3;i++)
	{
	     while(!st[i].isempty())
		st[i].pop();
	     while(!yt[i].isempty())
		yt[i].pop();
	     while(!col[i].isempty())
		col[i].pop();
	}
	while(!temp.isempty())
		temp.pop();

}
void boundry()
{
	setcolor(15);
	rectangle(3,3,getmaxx()-3,getmaxy()-3);

}
void statusbar(char *str="Status Bar",int color=2)
{
	setcolor(15);
	rectangle(3,getmaxy()-30,getmaxx()-3,getmaxy()-3);
	bsetfillstyle(1,0);
	bbar(6,getmaxy()-30+2,getmaxx()-5,getmaxy()-5);

	settextstyle(2,0,6);
	setcolor(color);
	outtextxy((getmaxx()/2)-(6*strlen(str)),getmaxy()-30+7,str);

}
void reset()
{
	int i=0;
	int t_y,radius;
	int color,starty;
	int sp=20;

	for(i=2;i>=0;i--)
	{


		while(!st[i].isempty())
		{
			radius=st[i].top();
			st[i].pop();
			t_y=yt[i].top();
			yt[i].pop();
			color=col[i].top();
			col[i].pop();
			starty=t_y;
			while(t_y>=base1[1]-height)
			{

				setfillstyle(1,color);
				setcolor(0);
				fillellipse(x[i],t_y,radius,5);
				//piller
				bsetfillstyle(rod,6);
				bbar(x[i],starty+5,x[i]+width,base1[1]-height);

				setfillstyle(1,0);
				setcolor(0);
				fillellipse(x[i],t_y,radius,5);

				t_y-=sp;
			}
			rotate(1,x[i],t_y,radius,5,x[i],1,color,sp+10);
		}
		boundry();
	}
	init_tower();

	boundry();
	statusbar();
	tower();
	init_button();


}
void newgame()
{
	int radius;
	int no_of_but;
	int i,j,t_y;
	int color;
	int clicked=0;
	int but_press=0;

	Mouse m;



	cleardevice();

	boundry();
	statusbar();
	clearstack();
	init_button();
	tower();
	switch(choice)
	{

		case 1: init_tower();
			break;
		case 2:	randomize_ring();
			break;
		default:init_tower();
	}

	cont:
	boundry();
	tower();
	rings();
	init_button();

	m.initmouse();
	m.showmouseptr();


//*******************************************

	while(1)
	{
		m.showmouseptr();
		m.getmousepos(&m_b,&m_x,&m_y);
		if(m_b==1)
		{

			if(choice!=2)
				no_of_but=3;
			else
				no_of_but=2;
			for(i=0;i<no_of_but;i++)
			{
			 while(m_x>=b[i].x-(10*strlen(b[i].text))&& m_y>=b[i].y-10&&m_x<=b[i].x+(10*strlen(b[i].text))&&m_y<=b[i].y+10 && m_b==1)
			 {
				m.hidemouseptr();

				clicked=1;
				but_press=i+1;
				button(b[i].x,b[i].y,20,9,b[i].text,0,clicked);

				 while(m_b==1)
					m.getmousepos(&m_b,&m_x,&m_y);

			      //	break;
			 }
			 if(clicked==1)
				break;


			}
			if(clicked==1)
			{

			   clicked=0;
			   button(b[i].x,b[i].y,20,9,b[i].text,14,clicked);
			     goto out;

			}


			 //base

			if(m_x>=base1[0]&& m_y>=base1[1]&&m_x<=base1[2]&&m_y<=base1[3])
			{
				m.hidemouseptr();

				sel=1;
			}
			else
			if(m_x>=base2[0]&& m_y>=base2[1]&&m_x<=base2[2]&&m_y<=base2[3])
			{       m.hidemouseptr();

				sel=2;
			}
			else
			 if(m_x>=base3[0]&& m_y>=base3[1]&&m_x<=base3[2]&&m_y<=base3[3])
			{
				m.hidemouseptr();

				sel=3;
			}
			 check();
			 tower();
			 move();
			 if(iscompleted()==1)
			 {
				cong();
				clearstack();
				goto end;

			 }
			 while(m_b==1)
				m.getmousepos(&m_b,&m_x,&m_y);


		}
		out:

		if(but_press!=0)
		{
			switch(but_press)
			{
			case 1: but_press=0;
					speed=speedbar(210,300-20,&newy,speedflag);

				if(speed==-1)
				 {
					speed=prevspeed;

				 }
				 else
				 if(speed<-1||speed==0)
				 {
					speed=10;
				 }
				 else
				 {
					prevspeed=speed;
					speedflag=1;
				 }
				 m.showmouseptr();
				    //speed
				break;
			case 2:
				but_press=0;

				menu();
				goto cont;

				//break;

			case 3://reset
				but_press=0;
				reset();

				break;

			}
		}

	}

	end:
}
/*void main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"..\\bgi");
	init();
	MainWindow("HELLO");
	int ch;
	cout<<"Enter:";
	cin>> choice;

	newgame();
	getch();
	closegraph();

}*/