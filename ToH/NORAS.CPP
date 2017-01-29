int nor,getspeed,size;
void far *ptr_horizontal;
void far *ptr_vertical;
struct viewporttype viewinfo;

void speedcal1()
{
	int a,b;
	b=100-getspeed;
	a=80;
	newy=(a*b/100)+280-40;
}

void images()
{
	cleardevice();
	setfillstyle(1,2);
	bar(100,125,120,145);
	setcolor(0);
	for(int i=140;i>124;i--)
		line(110,125,120,i);
	for(int j=140;j>124;j--)
		line(110,125,100,j);

	size = imagesize(98,123,122,147);    //24 24
	ptr_horizontal = malloc(size);
	getimage(98,123,122,147,ptr_horizontal);

	cleardevice();

	setfillstyle(1,2);
	bar(100,225,120,245);
	setcolor(0);
	for(int k=222;k>25;k--)
		line(98,235,145,k);
	for(int l=248;l<499;l++)
		line(98,235,145,l);

	size = imagesize(100,233,122,237);      //22 4
	ptr_vertical = malloc(size);
	getimage(100,233,122,237,ptr_vertical);

	cleardevice();
}
void ptrh(int x,int y)
{
	putimage(x,y,ptr_horizontal,0);

}
void ptrv(int x,int y)
{
	putimage(x,y,ptr_vertical,0);
}
void ring1(int c)
{
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(135,113,4,10);
}
void ring2(int c)
{
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(151,111,4,12);
}
void ring3(int c)
{
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(167,109,4,13);
}
void show(int p,int c)
{

switch(p)
{
	case 4:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(183,107,4,16);
	break;

	case 5:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(199,105,4,18);
	break;

	case 6:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(215,103,4,20);
	break;

	case 7:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(231,101,4,22);
	break;

	case 8:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(247,99,4,24);
	break;

	case 9:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(263,97,4,26);
	break;

	case 10:
	setcolor(c);
	setfillstyle(1,c);
	fillellipse(280,93,4,30);
	break;

	}
}
void hptr(int p)
{
	switch(p)
	{
		case 3: ptrh(156,143);
			break;

		case 4:	ptrh(171,143);
			break;

		case 5:	ptrh(187,143);
			break;

		case 6:	ptrh(203,143);
			break;

		case 7:	ptrh(219,143);
			break;

		case 8:	ptrh(235,143);
			break;

		case 9:	ptrh(252,143);
			break;

		case 10:ptrh(269,143);
			break;
	}
}
void hptr_hide(int p)
{
	setfillstyle(1,0);
	switch(p)
	{
		case 3: bar(161-5,143,161+24-5,143+24);
			break;

		case 4:	bar(176-5,143,176+24-5,143+24);
			break;

		case 5:	bar(192-5,143,192+124-5,143+24);
			break;

		case 6:	bar(208-5,143,208+24-5,143+24);
			break;

		case 7:	bar(224-5,143,224+24-5,143+24);
			break;

		case 8:	bar(240-5,143,240+24-5,143+24);
			break;

		case 9:	bar(257-5,143,257+24-5,143+24);
			break;

		case 10:bar(274-5,143,274+24-5,143+24);
			break;
	}
}
void calc(int n)
{
	int moves;
	char m[10];
	moves=pow(2,n)-1;
	itoa(moves,m,10);

	setcolor(11);
	settextstyle(6,0,1);
	outtextxy(465-80,85,"Minimum Moves Required : ");
	setcolor(YELLOW);
	rectangle(410,125,510,145);
	setfillstyle(1,0);
	bar(411,126,509,144);
	rectangle(408,123,512,148);
	if(n<6)
		setcolor(2);
	if(n>5&&n<9)
		setcolor(YELLOW);
	if(n>8)
		setcolor(4);
	settextstyle(6,0,1);
	outtextxy(465-20,120,m);

}
int show_rings()
{
	int ch=80,i=3;
	ring1(1);
	ring2(2);
	ring3(3);
	hptr(i);
	do{

		switch(ch)
		{
			case 72 : 			/* Up key */
			case 77 :			/* Right key */
				if(i<10)
					i++;
				show(i,i);
				hptr_hide(i-1);
				hptr(i);
				calc(i);
				break;

			case 80  :                      /* Down key */
			case 75  :			/* Left key */
				if(i>3)
					i--;
				show(i+1,0);
				hptr_hide(i+1);
				hptr(i);
				calc(i);
				break;
		}
		ch=getch();
	}while(ch!=13);
	return i;
}
void boundary11()
{
	setfillstyle(8,3);
	bar(4,4,10,getmaxy()-4);
	bar(4,getmaxy()-10,getmaxx()-10,getmaxy()-4);
	bar(4,4,getmaxx()-4,10);
	bar(getmaxx()-10,4,getmaxx()-4,getmaxy()-4);

}

int no_of_rings1()
{
	int n;
	boundary11();
	setfillstyle(2,4);
	bar(120,130,300,140);
	setfillstyle(1,5);
	bar(110,125,120,145);
	bar(300,125,309,145);
	n=show_rings();

	return (n);
}

void vptr(int p)
{
	ptrv(110,426-(15*(p-1)));
}
void vptr_hide(int p)
{
	setfillstyle(1,0);
	bar(109,425-(15*(p-1)),109+24,425-(15*(p-1))+6);
}
void speedval(int p)
{
	setfillstyle(2,4);
	bar(20,424-(15*(p-1)),90,440);
	setcolor(0);
	setfillstyle(1,0);
	bar(20,288,90,424-(15*(p-1)));
	fillellipse(20,440,60,440-290+5);
	boundary11();
}
int show_speed()
{
	int ch=80,i=1;
	vptr(i);
	do{

		switch(ch)
		{
			case 72 : 			/* Up key */
			case 77 :			/* Right key */
				if(i<10)
					i++;
				vptr_hide(i-1);
				vptr(i);
				speedval(i);
				break;

			case 80  :                      /* Down key */
			case 75  :			/* Left key */
				if(i>1)
					i--;
				vptr_hide(i+1);
				vptr(i);
				speedval(i);
				break;
		}
		ch=getch();
	}while(ch!=13);
	return i;
}
int ring_speed()
{
	int n;
	boundary11();
	setfillstyle(1,6);
	bar(100,280,105,450);
	bar(90,275,115,280);
	bar(90,450,115,455);
	n=show_speed();

	return (n);
}
int testspeed(int s)
{
	int ch;
	setviewport(130,300,600,450,1);

		setfillstyle(1,5);

		bar(97,100,103,130);
		bar(70,130,130,135);

		bar(347,100,353,130);
		bar(320,130,380,135);

		setcolor(10);
		setfillstyle(1,10);
		fillellipse(100,127,26,3);

		getch();
		setcolor(0);
		setfillstyle(1,0);
		fillellipse(100,127,26,3);

		setfillstyle(1,5);
		bar(97,100,103,130);
		bar(70,130,130,135);

		rotate(0,100,80,20,5,350,80,10,s);


		setcolor(10);
		setfillstyle(1,10);
		fillellipse(350,127,26,3);

		ch=getch();

	clearviewport();
	setviewport(viewinfo.left,viewinfo.top,viewinfo.right,viewinfo.bottom,1);
	return(ch);
}

void noras()
{
	int ch;

	getviewsettings(&viewinfo);

	images();

	setcolor(YELLOW);
	settextstyle(4,0,4);
	outtextxy(220,15,"No. Of Rings");

	nor=no_of_rings1();

	setcolor(YELLOW);
	settextstyle(4,0,4);
	outtextxy(190,205,"Speed Of Transfer");

	do
	{
		getspeed=ring_speed();
		getspeed=getspeed*10;
		ch=testspeed(getspeed);

	}while(ch!=13);

	getch();
	speedcal1();
	delete ptr_horizontal;
	delete ptr_vertical;
	cleardevice();
}