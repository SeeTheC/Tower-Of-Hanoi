void rule1()
{
	bresenhamline(110,182,110,250,4);
	bresenhamline(110,250,200,250,4);
	bresenhamline(200,250,200,350,4);
	bresenhamline(200,350,20,350,4);
	bresenhamline(20,350,20,250,4);
	bresenhamline(20,250,110,250,4);
	setcolor(6);
	settextstyle(3,0,2);
	outtextxy(25,265,"You cannot place");
	outtextxy(30,285,"a bigger ring on");
	outtextxy(40,305," a smaller one.");
}
void rule2()
{
	bresenhamline(320,182,320,250,4);
	bresenhamline(320,250,410,250,4);
	bresenhamline(410,250,410,350,4);
	bresenhamline(410,350,230,350,4);
	bresenhamline(230,350,230,250,4);
	bresenhamline(230,250,320,250,4);

	setcolor(6);
	settextstyle(3,0,2);
	outtextxy(235,255,"Final solved tower");
	outtextxy(270,275,"should be");
	outtextxy(245,295,"other than the");
	outtextxy(250,315,"original tower");
}
void showrules(int n)
{
	int c1,c2,c3,col=6;
	switch(n)
	{
		case 1:
		c1=col,c2=0,c3=0;
		//1
		dcircle1(110,130,46,c1);
		dcircle1(110,130,47,c1);
		dcircle1(110,130,48,c1);
		dcircle1(110,130,49,c1);
		//2
		dcircle1(320,130,46,c2);
		dcircle1(320,130,47,c2);
		dcircle1(320,130,48,c2);
		dcircle1(320,130,49,c2);
		//3
		dcircle1(520,130,46,c3);
		dcircle1(520,130,47,c3);
		dcircle1(520,130,48,c3);
		dcircle1(520,130,49,c3);
		break;

		case 2:
		c1=0,c2=col,c3=0;
		//1
		dcircle1(110,130,46,c1);
		dcircle1(110,130,47,c1);
		dcircle1(110,130,48,c1);
		dcircle1(110,130,49,c1);
		//2
		dcircle1(320,130,46,c2);
		dcircle1(320,130,47,c2);
		dcircle1(320,130,48,c2);
		dcircle1(320,130,49,c2);
		//3
		dcircle1(520,130,46,c3);
		dcircle1(520,130,47,c3);
		dcircle1(520,130,48,c3);
		dcircle1(520,130,49,c3);
		break;

		case 3:
		c1=0,c2=0,c3=col;
		//1
		dcircle1(110,130,46,c1);
		dcircle1(110,130,47,c1);
		dcircle1(110,130,48,c1);
		dcircle1(110,130,49,c1);
		//2
		dcircle1(320,130,46,c2);
		dcircle1(320,130,47,c2);
		dcircle1(320,130,48,c2);
		dcircle1(320,130,49,c2);
		//3
		dcircle1(520,130,46,c3);
		dcircle1(520,130,47,c3);
		dcircle1(520,130,48,c3);
		dcircle1(520,130,49,c3);
		break;
	}
}
int choose(int no_of_options,int curr)
{
	int ch=80,yaxis;
	do{

		switch(ch)
		{
			case 75 :
				if(curr==1)
					curr=no_of_options;
				else
					curr=curr-1;

				showrules(curr);
				break;

			case 77 :
				if(curr==no_of_options)
					curr=1;
				else
					curr=curr+1;
				showrules(curr);
				break;

		}
		ch=getch();
	}while(ch!=13);
	return(curr);
}

void rules()
{
	int ch;

	setfillstyle(6,6);
	bar(4,4,10,getmaxy()-4);
	bar(4,getmaxy()-10,getmaxx()-10,getmaxy()-4);
	bar(4,4,getmaxx()-4,10);
	bar(getmaxx()-10,4,getmaxx()-4,getmaxy()-4);

	setcolor(YELLOW);
	settextstyle(4,0,6);
	outtextxy(260,10,"Rules");

	dcircle1(110,130,43,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(70,120,"RULE 1");
	bcircle(110,130,52,4);

	dcircle1(320,130,43,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(280,120,"RULE 2");
	bcircle(320,130,52,4);

	dcircle1(520,130,43,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(480,120,"<<BACK");
	bcircle(520,130,52,4);
	ch=3;
	do
	{
	ch=choose(3,ch);
	switch(ch)
	{
		case 1:
			setcolor(0);
			setfillstyle(1,0);
			bar(228,184,412,350);
			rule1();
			break;
		case 2:
			setcolor(0);
			setfillstyle(1,0);
			bar(18,184,202,350);
			rule2();
			break;
	}
	}while(ch!=3);
	cleardevice();
}