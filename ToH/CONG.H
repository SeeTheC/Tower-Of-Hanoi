#include<graphics.h>
#include<conio.h>
void cong()
{
	int i;
	cleardevice();
	setcolor(2);
	settextstyle(3,1,7);
	outtextxy(50,20,"congratulation");
	setcolor(9);
	settextstyle(5,0,8);

	outtextxy(100-43,300+12,"c");
	outtextxy(100-40,300+12," ngratulation");

	for(i=0;i<5;i++)
	 {
		setcolor(6+i);
		ellipse(350,150,0,360,100-i,50);
	 }
	 setcolor(3);
	 settextstyle(3,0,5);
	 outtextxy(100-43,100-50,"Y  U");

	 settextstyle(3,0,7);
	 outtextxy(200,100-50,"DID");

	 setcolor(4);
	 settextstyle(4,0,7);
	 outtextxy(320,100,"!t");

		getch();
	cleardevice();

}
