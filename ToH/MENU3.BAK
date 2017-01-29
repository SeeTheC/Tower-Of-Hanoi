void menu();
void initcolorstack();
#include "cgfinal\tower1.cpp"
#include "cgfinal/noras.cpp"
#include "cgfinal\load.cpp"
#include "cgfinal/credits.cpp"
#include "cgfinal\algos.cpp"
#include "cgfinal/rules.cpp"
#include "cgfinal\abtgame.cpp"
#include "cgfinal/loading1.cpp"
#include "cgfinal/ringcol.h"
#define DELAY 10

void far *tow;     /* Image of tower */

int col1=RED;
int col2=GREEN;
int col3=BLUE;

void boundary1()
{

	setfillstyle(8,15);
	bar(4,4,10,getmaxy()-4);
	bar(4,getmaxy()-10,getmaxx()-10,getmaxy()-4);
	bar(4,4,getmaxx()-4,10);
	bar(getmaxx()-10,4,getmaxx()-4,getmaxy()-4);

}

void options();
void hidetower(int c)
{
	bsetcolor(BLACK);
	bsetfillstyle(1,BLACK);

	switch(c)
	{
		case 1 : bbar(14,118,208,190);
			 bbar(14,191,208,263);
			 bbar(14,265,208,337);
			 bbar(14,338,208,410);
			 options();
			 break;

		case 2 : bbar(14,48,208,120);
			 bbar(14,191,208,263);
			 bbar(14,265,208,337);
			 bbar(14,338,208,410);
			 options();
			 break;

		case 3 : bbar(14,48,208,120);
			 bbar(14,118,208,190);
			 bbar(14,265,208,337);
			 bbar(14,338,208,410);
			 options();
			 break;

		case 4 : bbar(14,48,208,120);
			 bbar(14,118,208,190);
			 bbar(14,191,208,263);
			 bbar(14,338,208,410);
			 options();
			 break;

		case 5 : bar(14,48,208,120);
			 bar(14,118,208,190);
			 bar(14,191,208,263);
			 bar(14,265,208,337);
			 options();
			 break;
	}

}

void showtower(int curr)
{
	switch(curr)
	{
		case 1 :  putimage(14,48,tow,1);
			  hidetower(1);
			  break;
		case 2 :  putimage(14,118,tow,1);
			  hidetower(2);
			  break;
		case 3 :  putimage(14,191,tow,1);
			  hidetower(3);
			  break;
		case 4 :  putimage(14,265,tow,1);
			  hidetower(4);
			  break;
		case 5 :  putimage(14,338,tow,1);
			  hidetower(5);
			  break;
	}
}

int mring(int n)
{
	switch(n)
	{
		case 1 : return(87);
		case 2 : return(157);
		case 3 : return(229);
		case 4 : return(304);
		case 5 : return(378);
	}
	return(-1);
}

void move(int no)
{
	int i,j,yaxis;
	setcolor(col3);
	setfillstyle(1,col3);

	yaxis=mring(no);

	fillellipse(50,yaxis,4,26);

	setcolor(BLACK);
	j=0;
	for(i=50;i<214;i++)
	{
		if(j==0&&i==54)
		{
			setcolor(col2);
			setfillstyle(1,col2);
			fillellipse(42,yaxis,5,30);
			j=1;
		}
		setcolor(BLACK);
		setfillstyle(1,col3);
		delay(DELAY-2);
		fillellipse(i,yaxis,5,27);
		if(i<210)
		{
			setfillstyle(1,7);
			bar(52,yaxis-7,i-6,yaxis-1);
		}
		if(i>200)
		{	setcolor(BLACK);
			setfillstyle(1,BLACK);
			fillellipse(i,yaxis,2,18);
		}
	}

	setcolor(BLACK);
	setfillstyle(1,col3);

	int x=5,y=27,z=yaxis,m=2,n=18;

	for(int k=212;k<276;k+=2)
	{
		delay(DELAY);
		if(k%3==0)
		{
			if(x<27)
				x+=1.5;
			if(y!=6)
				y-=2;
			if(m<18)
				m+=1;
			if(n>-0.5)
				n-=1.5;
		}

		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(k,z,m+8,n+25);

		setfillstyle(1,col3);
		fillellipse(k,z-=2,x,y);

		setfillstyle(8,15);
		bar(4,4,getmaxx()-4,10);


	}
	setcolor(BLACK);
	bsetfillstyle(1,BLACK);
	bbar(211,yaxis-50,k+114,300);

	for(int l=276;l<360;l+=2)
	{
		delay(DELAY+4);
		if(l%3==0)
		{
			if(x!=6)
				x-=1;
			if(y<27)
				y+=1;
			if(m>-0.5)
				m-=0.7;
			if(n<18)
				n+=1;
		}

		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(l,z+=1,m+10,n+10);

		setfillstyle(1,col3);
		fillellipse(l,z+=1,x,y);

		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(l,z+=1,m,n);



	}
	bbar(211,90,k+14,300);
	for(int o=360;o<496;o+=3)
	{
		delay(DELAY);
		if(o%3==0)
		{
			if(x<27)
				x+=1;
			if(y!=6)
				y-=1;
			if(m<18)
				m+=1;
			if(n>1)
				n-=1;
		}
		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(o,z,m+28,n+25);

		setfillstyle(1,col3);
		fillellipse(o,z-=0.8,x,y);

		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(o,z-=0.8,m,n);

		setfillstyle(8,15);
		bar(4,getmaxy()-4,getmaxx()-4,getmaxy()-10);
	}

	for(i=x;i<75;i++)
	{
		delay(20);
		setcolor(col3);
		setfillstyle(1,col3);
		fillellipse(o,z,i,y);

		setcolor(BLACK);
		setfillstyle(1,BLACK);
		fillellipse(o,z-1,i-10,2);


	}
}
void selection1(int);
void selection2(int);
void selection3(int);
void selection4(int);
void selection5(int);

void showrec(int curr,int type)
{
	switch(type)
	{
		case 1: selection1(curr);
			break;
		case 2: selection2(curr);
			break;
		case 3: selection3(curr);
			break;
		case 4: selection4(curr);
			break;
		case 5: selection5(curr);
			break;
	}
}
int get(int no_of_options)
{
	int ch=-1,curr=no_of_options,c,yaxis;
	curr=1;
	showtower(curr);
	do
	{

		switch(ch)
		{
			case 72 : 			/* Up key */
				if(curr==1)
					curr=no_of_options;
				else
					curr=curr-1;

				showtower(curr);
				break;

			case 80 : 			/* Down key */
				if(curr==no_of_options)
					curr=1;
				else
					curr=curr+1;
				showtower(curr);
				break;

		}
		ch=getch();
	}while(ch!=13);

	return(curr);

}

int get1(int no_of_options,int type)
{
	int ch=80,curr=no_of_options,c,yaxis;
	do{

		switch(ch)
		{
			case 72 : 			/* Up key */
				if(curr==1)
					curr=no_of_options;
				else
					curr=curr-1;

				showrec(curr,type);
				break;

			case 80 : 			/* Down key */
				if(curr==no_of_options)
					curr=1;
				else
					curr=curr+1;
				showrec(curr,type);
				break;

			//default : StatusLine("!!!\2 Use Arrow Keys Only \2!!!");
		}
		ch=getch();
	}while(ch!=13);
	return(curr);
}

void selection1(int n)
{
   switch(n)
   {
	case 1 : setcolor(RED);
		 rectangle(430,70,560,90);
		 setcolor(BLACK);
		 rectangle(430,95,560,115);
		 rectangle(430,120,560,140);
		 break;
	case 2 : setcolor(RED);
		 rectangle(430,95,560,115);
		 setcolor(BLACK);
		 rectangle(430,70,560,90);
		 rectangle(430,120,560,140);
		 break;
	case 3 : setcolor(RED);
		 rectangle(430,120,560,140);
		 setcolor(BLACK);
		 rectangle(430,95,560,115);
		 rectangle(430,70,560,90);
		 break;
   }

}
void playgame()
{
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(498,40,66,13);
	setcolor(YELLOW);
	outtextxy(498-27,40-12,"PLAY");
	setcolor(MAGENTA);
	settextstyle(6,0,1);
	delay(335);
	outtextxy(498-40,65,"New Game");
	delay(335);
	outtextxy(498-42,90,"Randomize");
	delay(335);
	outtextxy(498-30,115,"Continue");
}

void selection2(int n)
{
   switch(n)
   {
	case 1 : setcolor(RED);
		 rectangle(430,141,560,161);
		 setcolor(BLACK);
		 rectangle(430,166,560,186);
		 rectangle(430,191,560,211);
		 break;
	case 2 : setcolor(RED);
		 rectangle(430,166,560,186);
		 setcolor(BLACK);
		 rectangle(430,141,560,161);
		 rectangle(430,191,560,211);
		 break;
	case 3 : setcolor(RED);
		 rectangle(430,191,560,211);
		 setcolor(BLACK);
		 rectangle(430,141,560,161);
		 rectangle(430,166,560,186);
		 break;
   }

}
void automate()
{
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(498,110,66,13);
	setcolor(YELLOW);
	outtextxy(498-50,110-15,"AUTOMATE");
	setcolor(MAGENTA);
	settextstyle(6,0,1);
	delay(335);
	outtextxy(498-40,135,"Automatic");
	delay(335);
	outtextxy(498-30,160,"Mannual");
}

void selection3(int n)
{
   switch(n)
   {
	case 1 : setcolor(RED);
		 rectangle(430,215,560,235);//1
		 setcolor(BLACK);
		 rectangle(430,240,560,260);//2
		 rectangle(430,265,560,285);//3
		 break;
	case 2 : setcolor(RED);
		 rectangle(430,240,560,260);//2
		 setcolor(BLACK);
		 rectangle(430,215,560,235);//1
		 rectangle(430,265,560,285);//3
		 break;
	case 3 : setcolor(RED);
		 rectangle(430,265,560,285);//3
		 setcolor(BLACK);
		 rectangle(430,215,560,235);//1
		 rectangle(430,240,560,260);//2
		 break;

   }

}
void help()
{
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(498,184,66,13);
	setcolor(YELLOW);
	outtextxy(498-25,184-15,"HELP");
	setcolor(MAGENTA);
	settextstyle(6,0,1);
	delay(335);
	outtextxy(498-45,210,"About Game");
	delay(335);
	outtextxy(498-20,235,"Rules");
	delay(335);
	outtextxy(498-25,260,"Credits");
}

void selection4(int n)
{
   switch(n)
   {
	case 1 : setcolor(RED);
		 rectangle(430,285,560,305);//11
		 setcolor(BLACK);
		 rectangle(430,310,560,330);//22
		 rectangle(430,335,560,355);//33
		 break;
	case 2 : setcolor(RED);
		 rectangle(430,310,560,330);//22
		 setcolor(BLACK);
		 rectangle(430,285,560,305);//11
		 rectangle(430,335,560,355);//33
		 break;
	case 3 : setcolor(RED);
		 rectangle(430,335,560,355);//33
		 setcolor(BLACK);
		 rectangle(430,285,560,305);//11
		 rectangle(430,310,560,330);//22
		 break;
   }
}
void opts()
{
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(498,258,66,13);
	setcolor(YELLOW);
	outtextxy(498-40,258-15,"OPTIONS");
	setcolor(MAGENTA);
	settextstyle(6,0,1);
	delay(335);
	outtextxy(498-50,280,"Rings' Color");
	delay(335);
	outtextxy(498-55,305,"Speed & Rings");
}

void selection5(int n)
{
   switch(n)
   {
	case 1 : setcolor(RED);
		 rectangle(430,385,560,405);//1
		 setcolor(BLACK);
		 rectangle(430,406,560,426);//2
		 break;
	case 2 : setcolor(RED);
		 rectangle(430,406,560,426);//2
		 setcolor(BLACK);
		 rectangle(430,385,560,405);//1
		 break;
   }
}
void myexit()
{
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(498,332,66,13);
	setcolor(YELLOW);
	outtextxy(498-22,332-15,"EXIT");
	setcolor(MAGENTA);
	settextstyle(6,0,1);
	delay(335);
	outtextxy(498-86,360,"Do You Really Wanna Exit ?");
	delay(335);
	outtextxy(498-15,380,"No");
	delay(335);
	outtextxy(498-15,400,"Yes");
}

void options()
{
	settextstyle(8,0,1);

	//option 1
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(130,84,66,13);
	setcolor(YELLOW);
	outtextxy(130-27,69,"PLAY");


	//option 2
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(130,154,66,13);
	setcolor(YELLOW);
	outtextxy(130-50,139,"AUTOMATE");

	//option 3
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(130,227,66,13);
	setcolor(YELLOW);
	outtextxy(130-25,212,"HELP");

	//option 4
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(130,300,66,13);
	setcolor(YELLOW);
	outtextxy(130-40,285,"OPTIONS");

	//option 5
	setcolor(BROWN);
	setfillstyle(1,BLACK);
	fillellipse(130,374,66,13);
	setcolor(YELLOW);
	outtextxy(130-22,359,"EXIT");
}

void sampletower()
{
	int size;
	//main stick
	bsetcolor(7);
	bsetfillstyle(1,7);
	bbar(230,200,410,207);
	bbar(222,176,230,232);

	//rings
	setcolor(col1);
	setfillstyle(1,col1);
	fillellipse(238,204,5,34);
	setcolor(col2);
	setfillstyle(1,col2);
	fillellipse(246,206,5,30);

	//moving ring
	setcolor(col3);
	setfillstyle(1,col3);
	fillellipse(254,207,4,26);

	/* calculate the size of the image */
	size = imagesize(218,168,412,240);

	/* allocate memory to hold the image */
	tow = malloc(size);

	getimage(218,168,412,240,tow);

	bsetcolor(BLACK);
	bsetfillstyle(1,BLACK);
	bbar(218,168,412,240);
}
void menu()
{
	int yaxis,c,ans;
	c=0;

	defaultcolor();

	up:
	cleardevice();
	boundary1();

	sampletower();       /* For Getting Image Of The Tower  */
	options();           /* For Displaying The Options 	*/

	c=get(5);
	move(c);
	switch(c)
	{
		case 1 :playgame();
			ans=get1(3,1);
			if(ans!=3)
			{
				choice=ans;
				cleardevice();
				load(0,0,0);
				newgame();


			}
			else
			{
				if(st[0].isempty()&&st[1].isempty()&&st[2].isempty())
				{
					setcolor(4);
					settextstyle(8,0,1);
					outtextxy(498-180,135,"!!  No Previous Game Exists  !!");
					getch();
					cleardevice();
					goto up;
				}
				else
				{
					cleardevice();
					goto down;
				}
			}

			break;
		case 2 :automate();
			ans=get1(2,2);
			loading1();
			if(ans==1)
				automatic(0);
			else
				automatic(1);
			break;
		case 3 :help();
			ans=get1(3,3);
			if(ans==3)
			{
				cleardevice();
				credits();
			}
			else if(ans==2)
			{
				cleardevice();
				rules();
			}
			else
			{
				cleardevice();
				abtgame();
			}
			break;
		case 4 :opts();
			ans=get1(2,4);
			if(ans==1)
			{
				cleardevice();
				 boundary1();

				ringcontroler();

			}
			if(ans==2)
			{
				noras();
				no_of_rings=nor;
				speed=prevspeed=getspeed;
				speedcal1();
				speedflag=1;

			}
			break;
		case 5 :myexit();
			ans=get1(2,5);
			if(ans==2)
			{

				cleardevice();
				credits();

				exit(0);
			}
			else
			{
				goto up;
			}
			break;

	}
	c=0;
	cleardevice();
	delete tow;
	goto up;
	down:
}

