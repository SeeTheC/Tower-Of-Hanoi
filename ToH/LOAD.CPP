void boundary2()
{
	setfillstyle(5,10);
	bar(4,4,10,getmaxy()-4);
	bar(4,getmaxy()-10,getmaxx()-10,getmaxy()-4);
	bar(4,4,getmaxx()-4,10);
	bar(getmaxx()-10,4,getmaxx()-4,getmaxy()-4);

}

void load(int a,int b,int c)
{
	boundary2();

	setcolor(RED);
	rectangle(130,270,500,290);
	gotoxy(28,18);

	cout<<" Press any key to cont....";
	getch();
	settextstyle(7,0,1);
	outtextxy(getmaxx()/2-80,200,"LOADING...");
	int n,i,j,l;
	for(l=133,n=133,i=133,j=153;i<=477,l<=447,j<=496;i++,j++,l++)
	{
	delay(5);
	setfillstyle(1,a);
	bar(l,273,n,287);

	setfillstyle(1,RED);
	bar(i,273,j,287);
	}

	for(n=497;i>=133,l>=183,j>=153;i--,j--,l--)
	{
	delay(5);
	setfillstyle(1,b);
	bar(l,273,n,287);

	setfillstyle(1,YELLOW);
	bar(i,273,j,287);
	}

	for(l=133,n=133,i=133,j=153;i<=477,l<=447,j<=496;i++,j++,l++)
	{
	delay(5);
	setfillstyle(1,c);
	bar(l,273,n,287);

	setfillstyle(1,GREEN);
	bar(i,273,j,287);
	}

	delay(2000);
}
