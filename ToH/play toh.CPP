#include "cgfinal\header.cpp"
#include "cgfinal\menu3.cpp"
#include "cgfinal\airload.cpp"
#include "cgfinal\fp.cpp"

void main()
{
	int a=DETECT,b;
	registerfarbgidriver(&a);
	initgraph(&a,&b,"..\\bgi");

	boundary1();

	airload();

	fp();

	initgraph(&a,&b,"..\\bgi");

	boundary1();

	menu();

	getch();

	closegraph();
}