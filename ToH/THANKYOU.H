#include<graphics.h>
#include<dos.h>
thankyou()
{


	int a,b;
	for(a=0;a<=36;a++)
	{
		settextstyle(10,0,6);
		if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(100,-190+(b*10),"T");
				}
				else
				{
					setcolor(6);
					outtextxy(100,-190+(b*10),"T");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(100,-190+(a*10),"T");
		}

		delay(1);
	}
	delay(500);
	for(a=0;a<=36;a++)
	{

		settextstyle(10,0,6);



			if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(150,-190+(b*10),"H");
				}
				else
				{
					setcolor(6);
					outtextxy(150,-190+(b*10),"H");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(150,-190+(a*10),"H");
		}

		delay(1);
	}

	delay(500);
	 for(a=0;a<=36;a++)
	{

		settextstyle(10,0,6);
			if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(200,-190+(b*10),"A");
				}
				else
				{
					setcolor(6);
					outtextxy(200,-190+(b*10),"A");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(200,-190+(a*10),"A");
		}



		delay(1);
	}

	delay(500);
	for(a=0;a<=36;a++)
	{
		settextstyle(10,0,6);
			if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(250,-190+(b*10),"N");
				}
				else
				{
					setcolor(6);
					outtextxy(250,-190+(b*10),"N");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(250,-190+(a*10),"N");
		}

		delay(1);
	}
	delay(500);
	for(a=0;a<=36;a++)
	{	settextstyle(10,0,6);
			if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(300,-190+(b*10),"K");
				}
				else
				{
					setcolor(6);
					outtextxy(300,-190+(b*10),"K");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(300,-190+(a*10),"K");
		}

		delay(1);
	}


	delay(500);
	for(a=0;a<=36;a++)
	{

		settextstyle(10,0,6);
		if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(400,-190+(b*10),"Y");
				}
				else
				{
					setcolor(6);
					outtextxy(400,-190+(b*10),"Y");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(400,-190+(a*10),"Y");
		}

		delay(1);
	}


	delay(500);
	for(a=0;a<=36;a++)
	{

		settextstyle(10,0,6);
		if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(450,-190+(b*10),"O");
				}
				else
				{
					setcolor(6);
					outtextxy(450,-190+(b*10),"O");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(450,-190+(a*10),"O");
		}

		delay(1);
	}


	delay(500);
	for(a=0;a<=36;a++)
	{

		settextstyle(10,0,6);
	if(a>0)
		{
			for(b=a-1;b<=a;b++)
			{
				if(b==(a-1))
				{

					setcolor(0);
					outtextxy(500,-190+(b*10),"U");
				}
				else
				{
					setcolor(6);
					outtextxy(500,-190+(b*10),"U");
				}

			}
		}
		else
		{
				setcolor(6);
				outtextxy(500,-190+(a*10),"U");
		}

		delay(1);
	}
	return 0;
}
