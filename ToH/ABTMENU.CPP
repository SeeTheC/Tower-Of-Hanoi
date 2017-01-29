void show(int n)
{
	int c1,c2,c3,c4;
	switch(n)
	{
		case 1:
		c1=YELLOW;c2=0;c4=c3=0;
		//1
		dcircle1(310,100,77,c1);
		dcircle1(310,100,78,c1);
		dcircle1(310,100,79,c1);
		dcircle1(310,100,81,c1);
		dcircle1(310,100,82,c1);
		dcircle1(310,100,83,c1);
		dcircle1(310,100,84,c1);
		//2
		dcircle1(120,380,77,c2);
		dcircle1(120,380,78,c2);
		dcircle1(120,380,79,c2);
		dcircle1(120,380,81,c2);
		dcircle1(120,380,82,c2);
		dcircle1(120,380,83,c2);
		dcircle1(120,380,84,c2);
		//3
		dcircle1(500,380,77,c3);
		dcircle1(500,380,78,c3);
		dcircle1(500,380,79,c3);
		dcircle1(500,380,81,c3);
		dcircle1(500,380,82,c3);
		dcircle1(500,380,83,c3);
		dcircle1(500,380,84,c3);
		//4
		ddarect(510,36,624,74,c4);
		ddarect(511,37,623,73,c4);
		ddarect(512,38,622,72,c4);
		ddarect(513,39,621,71,c4);

		break;

		case 2:
		c4=c1=0;c2=YELLOW;c3=0;
		//1
		dcircle1(310,100,77,c1);
		dcircle1(310,100,78,c1);
		dcircle1(310,100,79,c1);
		dcircle1(310,100,81,c1);
		dcircle1(310,100,82,c1);
		dcircle1(310,100,83,c1);
		dcircle1(310,100,84,c1);
		//2
		dcircle1(120,380,77,c2);
		dcircle1(120,380,78,c2);
		dcircle1(120,380,79,c2);
		dcircle1(120,380,81,c2);
		dcircle1(120,380,82,c2);
		dcircle1(120,380,83,c2);
		dcircle1(120,380,84,c2);
		//3
		dcircle1(500,380,77,c3);
		dcircle1(500,380,78,c3);
		dcircle1(500,380,79,c3);
		dcircle1(500,380,81,c3);
		dcircle1(500,380,82,c3);
		dcircle1(500,380,83,c3);
		dcircle1(500,380,84,c3);
		//4
		ddarect(510,36,624,74,c4);
		ddarect(511,37,623,73,c4);
		ddarect(512,38,622,72,c4);
		ddarect(513,39,621,71,c4);

		break;

		case 3:
		c4=c1=0;c3=YELLOW;c2=0;
		//1
		dcircle1(310,100,77,c1);
		dcircle1(310,100,78,c1);
		dcircle1(310,100,79,c1);
		dcircle1(310,100,81,c1);
		dcircle1(310,100,82,c1);
		dcircle1(310,100,83,c1);
		dcircle1(310,100,84,c1);
		//2
		dcircle1(120,380,77,c2);
		dcircle1(120,380,78,c2);
		dcircle1(120,380,79,c2);
		dcircle1(120,380,81,c2);
		dcircle1(120,380,82,c2);
		dcircle1(120,380,83,c2);
		dcircle1(120,380,84,c2);
		//3
		dcircle1(500,380,77,c3);
		dcircle1(500,380,78,c3);
		dcircle1(500,380,79,c3);
		dcircle1(500,380,81,c3);
		dcircle1(500,380,82,c3);
		dcircle1(500,380,83,c3);
		dcircle1(500,380,84,c3);
		//4
		ddarect(510,36,624,74,c4);
		ddarect(511,37,623,73,c4);
		ddarect(512,38,622,72,c4);
		ddarect(513,39,621,71,c4);

		break;

		case 4:
		c1=0;c3=0;c2=0,c4=RED;
		//1
		dcircle1(310,100,77,c1);
		dcircle1(310,100,78,c1);
		dcircle1(310,100,79,c1);
		dcircle1(310,100,81,c1);
		dcircle1(310,100,82,c1);
		dcircle1(310,100,83,c1);
		dcircle1(310,100,84,c1);
		//2
		dcircle1(120,380,77,c2);
		dcircle1(120,380,78,c2);
		dcircle1(120,380,79,c2);
		dcircle1(120,380,81,c2);
		dcircle1(120,380,82,c2);
		dcircle1(120,380,83,c2);
		dcircle1(120,380,84,c2);
		//3
		dcircle1(500,380,77,c3);
		dcircle1(500,380,78,c3);
		dcircle1(500,380,79,c3);
		dcircle1(500,380,81,c3);
		dcircle1(500,380,82,c3);
		dcircle1(500,380,83,c3);
		dcircle1(500,380,84,c3);
		//4
		ddarect(510,36,624,74,c4);
		ddarect(511,37,623,73,c4);
		ddarect(512,38,622,72,c4);
		ddarect(513,39,621,71,c4);
		break;

	}

}
void one()
{
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(238,205,"*NEW GAME*");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(230,225,"Lets you to start");
	delay(320);
	outtextxy(235,240," a new game.");
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(200,270,"* CONTINUE GAME *");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(215,290,"Lets you to continue");
	delay(320);
	outtextxy(205,305," your previous game");
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(230,335,"* RANDOMIZE *");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(225,355,"Play the game when");
	delay(320);
	outtextxy(235,370,"rings are spread");
	delay(320);
	outtextxy(255,385 ,"randomly in ");
	delay(320);
	outtextxy(285,400 ,"towers");
}
void two()
{
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(234,210,"*AUTOMATIC*");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(220,230,"Automatic mode puts");
	delay(320);
	outtextxy(215,245,"the rings automatically ");
	delay(320);
	outtextxy(225,260,"into the appropriate");
	delay(320);
	outtextxy(280,275,"tower");
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(240,310,"* MANUAL *");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(225,330,"Manual mode allows");
	delay(320);
	outtextxy(220,345,"you to see the next");
	delay(320);
	outtextxy(230,360,"move by pressing");
	delay(320);
	outtextxy(265,375," the key");
}
void three()
{
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(248,210,"* RINGS *");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(220,230,"SPEED : Lets you");
	delay(320);
	outtextxy(215,245,"vary the speed of the");
	delay(320);
	outtextxy(290,260,"rings");
	delay(320);
	outtextxy(215,280,"NO. OF RINGS : Lets ");
	delay(320);
	outtextxy(205,295,"you set the total number");
	delay(320);
	outtextxy(280,310,"of rings");
	setcolor(9);
	settextstyle(7,0,2);
	delay(320);
	outtextxy(230,340,"* RING COLOR *");
	setcolor(6);
	settextstyle(3,0,1);
	delay(320);
	outtextxy(255,355,"Allows you to ");
	delay(320);
	outtextxy(240,370,"choose different");
	delay(320);
	outtextxy(270,385,"ring colors");
}
int select(int no_of_options,int curr)
{
	int ch=80,yaxis;
	do{

		switch(ch)
		{
			case 72 : 			/* Up key */
			case 75 :
				if(curr==1)
					curr=no_of_options;
				else
					curr=curr-1;

				show(curr);
				break;

			case 80 : 			/* Down key */
			case 77 :
				if(curr==no_of_options)
					curr=1;
				else
					curr=curr+1;
				show(curr);
				break;

		}
		ch=getch();
	}while(ch!=13);

	return(curr);
}

void aboutmenu()
{
	int a=5,i;


	dcircle1(310,100,80,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(250,90,"PLAY GAME");
	bcircle(310,100,85,4);

	dcircle1(120,380,80,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(70,370,"AUTOMATE");
	bcircle(120,380,85,4);


	dcircle1(500,380,80,4);
	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(450,370,"OPTIONS");
	bcircle(500,380,85,4);

	setcolor(GREEN);
	settextstyle(7,0,2);
	outtextxy(520,40,"<< BACK");

	ddarect(514,40,620,70,RED);
	ddarect(509,35,625,75,RED);

//	dcircle2(310,305,120,YELLOW);
//	dcircle2(310,305,119,YELLOW);
//	dcircle2(310,305,118,YELLOW);

	setcolor(6);
	settextstyle(3,0,1);
	outtextxy(225,270,"Press Arow Keys");
	outtextxy(225,290,"Press Enter To ");
	outtextxy(225,310,"Select The Field");
	getch();
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(310,305,117,117);

	a=5;
	do{
	a=select(4,a-1);
	switch(a)
	{
		case 1 : one();
			 getch();
			 break;
		case 2 : two();
			 getch();
			 break;
		case 3 : three();
			 getch();
			 break;
	}
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(310,305,117,117);

	}while(a!=4);
	cleardevice();

}