#include<graphics.h>

void  *image_tower;
void  *image_ftower;
void  *image_rings;
void  *image_o;
void  *image_w;
void  *image_e;
void  *image_r;

int size1;

void frame()
{
	setcolor(15);
	rectangle(3,3,getmaxx()-3,getmaxy()-3);
	rectangle(7,7,getmaxx()-7,getmaxy()-7);
}
void read_o(int color)
{
	setcolor(GREEN);
	setfillstyle(1,color);
	fillellipse(100,100,20,30);
	setfillstyle(1,0);
	fillellipse(96,94,8,17);

	size1 = imagesize(77,67,123,133);
	image_o = malloc(size1);
	getimage(77,67,123,133,image_o);

	setcolor(BLACK);
	setfillstyle(1,BLACK);
	bar(77,67,123,133);
}
void o1(int x,int y)
{
	putimage(x,y,image_o,0);
}

void read_w(int color)
{
	void far *image_w1,*image_w2;
	setfillstyle(1,color);
	bar(100,155,120,210);
	setcolor(BLACK);
	setfillstyle(1,BLACK);
	fillellipse(133,185,20,40);
	setcolor(7);
	setfillstyle(1,BLACK);
	fillellipse(84,182,20,40);

	size1 = imagesize(98,153,120,212);
	image_w1 = malloc(size1);
	getimage(98,153,120,212,image_w1);
	setcolor(BLACK);
	bar(98,153,120,212);                    //hiding

	setcolor(7);
	setfillstyle(1,color);
	fillellipse(410,250,39,10);
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(395,230,10,22);
	fillellipse(425,230,10,22);

	size1 = imagesize(370,240,450,260);
	image_w2 = malloc(size1);
	getimage(370,240,450,260,image_w2);

	setcolor(BLACK);
	bar(370,240,450,260);			//hiding

	putimage(170,240,image_w2,0);
	putimage(170,190,image_w1,0);
	putimage(200,200,image_w1,0);
	putimage(230,190,image_w1,0);

	size1 = imagesize(168,189,254,264);
	image_w = malloc(size1);
	getimage(168,189,254,264,image_w);

	setcolor(BLACK);
	bar(168,189,254,264);			//hiding
}
void w(int x,int y)
{
	putimage(x,y,image_w,0);
}

void read_e(int color)
{
	setcolor(color);
	setfillstyle(1,color);
	fillellipse(205,195,45,30);

	setcolor(0);
	setfillstyle(1,0);
	fillellipse(200,200,15,15);
	bar(200,185,300,215);
	fillellipse(210,175,13,5);
	setcolor(2);

	size1 = imagesize(156,162,250,228);
	image_e = malloc(size1);
	getimage(156,162,250,228,image_e);

	setcolor(BLACK);
	bar(156,162,250,228);			//hiding

}
void e(int x,int y)
{
	putimage(x,y,image_e,0);
}
void read_r(int color)
{
	setfillstyle(1,color);
	bar(100,200,150,270);

	setcolor(0);
	setfillstyle(1,0);
	fillellipse(145,250,30,40);
	for(int i=113;i<213;i++)
		line(113,222,i,12);

	size1 = imagesize(98,198,152,272);
	image_r = malloc(size1);
	getimage(98,198,152,272,image_r);

	setcolor(BLACK);
	bar(98,198,152,272);			//hiding
}
void r(int x,int y)
{
	putimage(x,y,image_r,0);
}
void read_tower()
{
	setfillstyle(1,7);
	bar(93,300,157,310);
	bar(120,200,130,310);

	setcolor(2);
	setfillstyle(1,2);
	fillellipse(125,293,37,6);

	setcolor(4);
	setfillstyle(1,4);
	fillellipse(125,283,27,6);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(125,273,18,6);

	setfillstyle(1,7);
	bar(120,200,130,270);

	size1 = imagesize(85,197,165,313);
	image_tower = malloc(size1);
	getimage(85,197,165,313,image_tower);

	setfillstyle(1,0);
	bar(85,197,165,313);			//hiding

}
void read_ftower()
{
	setfillstyle(1,7);
	bar(93,200,157,210);
	bar(120,200,130,310);

	setcolor(2);
	setfillstyle(1,2);
	fillellipse(125,218,37,6);

	setcolor(4);
	setfillstyle(1,4);
	fillellipse(125,228,27,6);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(125,238,18,6);

	setfillstyle(1,7);
	bar(120,242,130,310);

	size1 = imagesize(85,197,165,313);
	image_ftower = malloc(size1);
	getimage(85,197,165,313,image_ftower);

	setfillstyle(1,0);
	bar(85,197,165,313); 			//hiding

}
void read_rings()
{
	setcolor(2);
	setfillstyle(1,2);
	fillellipse(65,101,37,6);

	setcolor(4);
	setfillstyle(1,4);
	fillellipse(65,111,27,6);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(65,121,18,6);

	size1 = imagesize(26,94,103,130);
	image_rings = malloc(size1);
	getimage(26,94,103,130,image_rings);

	setfillstyle(1,0);
	bar(26,94,103,130); 			//hiding

}

void read_chars()
{
	read_o(BROWN);
	cleardevice();
	read_w(BLUE);
	cleardevice();
	read_e(RED);
	cleardevice();
	read_r(GREEN);
	cleardevice();
	read_tower();
	cleardevice();
	read_ftower();
	cleardevice();
	read_rings();
	cleardevice();
}
void t(int x,int y)
{
	putimage(x,y,image_tower,0);
}
void ft(int x,int y)
{
	putimage(x,y,image_ftower,0);
}
void rings(int x,int y)
{
	putimage(x,y,image_rings,0);
}

void move_rings()
{
	delay(400);
	for(int i=94;i<getmaxy()-35;i++)
	{
		if(i<200)
		{
			setfillstyle(1,7);
			bar(160,84,170,i);

		}
		rings(126,i);
		delay(2);
	}
	setfillstyle(1,0);
	bar(125,i-5,205,getmaxy());

	setcolor(2);
	setfillstyle(1,2);
	fillellipse(165,getmaxy()-31,37,6);

	setcolor(4);
	setfillstyle(1,4);
	fillellipse(165,getmaxy()-21,27,6);

	setcolor(1);
	setfillstyle(1,1);
	fillellipse(165,getmaxy()-11,18,6);

	int j,k,z=getmaxy()-11;

	for(i=z,j=z-10,k=z-20;k>224;i--,j--,k--)
	{
		frame();

		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,k,39,9);
		setfillstyle(1,2);
		fillellipse(165,k-=2,37,6);

		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,j,39,9);
		setfillstyle(1,4);
		fillellipse(165,j--,27,6);

		setcolor(0);
		setfillstyle(1,1);
		fillellipse(165,i,18,6);
		delay(5);
	}
	int l,m,o;
	for(l=i-1,m=j-2,o=k-3;o<z-35;l++,m++,o++)
	{
		frame();
		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,o,39,9);
		setfillstyle(1,2);
		fillellipse(165,o+=2,37,6);

		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,m,39,9);
		setfillstyle(1,4);
		fillellipse(165,m++,27,6);

		setcolor(0);
		setfillstyle(1,1);
		fillellipse(165,l,18,6);
		delay(10);
	}

	for(i=z,j=z-10,k=z-20;k>102;i--,j--,k--)
	{
		frame();
		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,k,39,9);
		setfillstyle(1,2);
		fillellipse(165,k-=2,37,6);
		if(k<200)
		{
			setfillstyle(1,7);
			bar(160,200,170,k+3);
		}

		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,j,39,9);
		setfillstyle(1,4);
		fillellipse(165,j--,27,6);

		setcolor(0);
		setfillstyle(1,1);
		fillellipse(165,i,18,6);
		delay(6);
	}
	for(;j>112;j--,i--)
	{
		setcolor(0);
		setfillstyle(1,0);
		fillellipse(165,j,39,9);
		setfillstyle(1,4);
		fillellipse(165,j--,27,6);
		if(j<200)
		{
			setfillstyle(1,7);
			bar(160,200,170,j+3);
		}

		setcolor(0);
		setfillstyle(1,1);
		fillellipse(165,i,18,6);
		delay(4);

	}
	for(;i>122;i--)
	{
		setcolor(0);
		setfillstyle(1,1);
		fillellipse(165,i,18,6);
		if(i<200)
		{
			setfillstyle(1,7);
			bar(160,200,170,i+3);
		}

		delay(2);
	}
}
void wave()
{
	int i;

	for(i=80;i<100;i++)
		ft(125,i);
	for(i=100;i>80;i--)
	{
		ft(125,i);
		delay(2);
	}
	delay(5);
	for(i=120;i<140;i++)
		o1(210,i);
	for(i=140;i>120;i--)
	{
		o1(210,i);
		delay(2);
	}
	delay(5);
	for(i=120;i<140;i++)
		w(260,i);
	for(i=140;i>120;i--)
	{
		w(260,i);
		delay(2);
	}
	delay(5);
	for(i=120;i<140;i++)
		e(345,i);
	for(i=140;i>120;i--)
	{
		e(345,i);
		delay(2);
	}
	delay(5);
	for(i=120;i<140;i++)
		r(440,i);
	for(i=140;i>120;i--)
	{
		r(440,i);
		delay(2);
	}
}

void move_tower()
{
	int i;
	delay(2000);
	for(i=-100;i<125;i++)
	{
		frame();
		t(i,80);
		delay(2);
	}
	float j;
	for(j=0;j<20;j++)
	{
		o1(210+j,120);
		w(260+j,120);
		e(345+j,120);
		r(440+j,120);
		delay(1);
	}
	for(;j>0;j--)
	{
		o1(210+j,120);
		w(260+j,120);
		e(345+j,120);
		r(440+j,120);
		delay(1);
	}
	delay(370);
	ft(125,80);

	move_rings();

	wave();
}

void fp()
{


	read_chars();
	cleardevice();
	frame();
	delay(2000);
	delay(320);
	o1(210,120);
	delay(320);
	w(260,120);
	delay(320);
	e(345,120);
	delay(320);
	r(440,120);


	move_tower();

	delay(2);
	setcolor(YELLOW);
	settextstyle(7,0,6);
	outtextxy(295,250,"Of Hanoi");

	delay(2000);

	delete image_tower;
	delete image_ftower;
	delete image_rings;
	delete image_o;
	delete image_w;
	delete image_e;
	delete image_r;
	closegraph();
}