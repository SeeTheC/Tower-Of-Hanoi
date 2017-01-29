
void boundary12()
{
	setfillstyle(5,6);
	bar(4,4,10,getmaxy()-4);
	bar(4,getmaxy()-10,getmaxx()-10,getmaxy()-4);
	bar(4,4,getmaxx()-4,10);
	bar(getmaxx()-10,4,getmaxx()-4,getmaxy()-4);

}

void loading1()
{

	int a,b,c,d,e,f,g,h,i,j,k;
	 int midx, midy;
	int stangle1=-167, endangle1=130;
	int stangle =1, endangle = 300;
	int radius = 90;
	int radius1=50;
	cleardevice();
	boundary12();

	midx = getmaxx() / 2;
	midy = getmaxy() / 2;

	setcolor(9);
	settextstyle(6,0,2);
	outtextxy(280,220,"LOADING");

	setcolor(2);
	 radius = 90;
	for(radius=90;radius>=86;radius--)
	{
		setcolor(2);
		arc(midx, midy, stangle, endangle, radius);
	}

	radius1= 50;
	 stangle1=-167;
	  endangle1=130;
	 for(radius1=50;radius1>=48;radius1--)
	{
		setcolor(2);
		arc(midx, midy, stangle1, endangle1, radius1);
	}

	 stangle1=-167;
	  endangle1=130;

	for(i=1;i<=300;i=i+1)
	{
		stangle= stangle+1;
		endangle =endangle+1;

		 stangle1=-167-i;
		 endangle1=130-i;

		 delay(10);

		for(radius=90;radius>=86;radius--)
		{
			setcolor(0);
			arc(midx, midy, stangle-1, endangle-1, radius);
		}
		 for(radius1=50;radius1>=48;radius1--)
		{
			setcolor(0);
			arc(midx, midy, stangle1+1, endangle1+1, radius1);
		}
		for(radius=90;radius>=86;radius--)
		{
			setcolor(2);
			arc(midx, midy, stangle, endangle, radius);
		}
		   for(radius1=50;radius1>=48;radius1--)
		{
			setcolor(2);
			arc(midx, midy, stangle1, endangle1, radius1);
		}


	}


}
