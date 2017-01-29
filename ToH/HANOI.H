#include<stdio.h>
#include<conio.h>
extern int selected[2];
void tower_of_hanoi(int n, int LEFT, int RIGHT,int CENTER)
{
if(n>0)
{
tower_of_hanoi(n-1, LEFT, CENTER, RIGHT);

	selected[0]=LEFT;
	selected[1]=LEFT;

//printf("\n\tMove disk %d from %d to %d", n, LEFT, RIGHT);
tower_of_hanoi(n-1, CENTER, RIGHT, LEFT);
}
}

void automatic(int n)
{
tower_of_hanoi(n,1,2,3);
}
