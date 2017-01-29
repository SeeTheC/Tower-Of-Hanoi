void howtoplay()
{
	int i,ch;
	setcolor(15);
	ellipse(130,230,0,360,120,60);
	setfillstyle(1,6);
	fillellipse(130,230,120,40);
	setcolor(1);
	settextstyle(7,0,3);
	outtextxy(80,205,"HOW TO");
	outtextxy(90,225,"PLAY. . .");

	ellipse(310-25,440,0,360,82,10);
	setfillstyle(1,4);
	fillellipse(310-25,440,82,10);

	ellipse(305-25,430,0,360,62,10);
	setfillstyle(1,5);
	fillellipse(305-25,430,62,10);

	ellipse(305-25,420,0,270,42,10);
	setfillstyle(1,3);
	fillellipse(305-25,420,42,10);

	setcolor(1);
	setfillstyle(1,6);
	bar(295-20,50,315-20,425);
	bar(215-20,450,395-20,465);

	setcolor(14);
	settextstyle(8,0,3);
	outtextxy(380,50,"HOW TO PLAY ?");

	setcolor(GREEN);
	settextstyle(9,0,2);
	outtextxy(330,30,"HOW TO PLAY ?");

	setcolor(12);
	settextstyle(8,0,1);
	outtextxy(350,90,"To move the rings from");
	outtextxy(345,105,"original tower to another");
	outtextxy(350,120,"tower,Click on the base of");
	outtextxy(345,135,"original tower and then");
	outtextxy(350,150,"on the base of the tower");
	outtextxy(345,165,"in which you want to");
	outtextxy(350,180,"move the rings.");
	outtextxy(345,205,"While moving the rings,");
	outtextxy(350,220,"bigger ring should not be ");
	outtextxy(345,235,"placed on a smaller one.");
	outtextxy(350,260,"You can make use of");
	outtextxy(345,275,"any of the 3 towers");
	outtextxy(350,290,"to put the rings in");
	outtextxy(345,305,"ascending order in the");
	outtextxy(350,320,"target tower.");
	outtextxy(345,345,"You can adjust the speed");
	outtextxy(350,360,"and no of rings from");
	outtextxy(350,375,"main menu\\options\\...");
	getch();
	cleardevice();
}
