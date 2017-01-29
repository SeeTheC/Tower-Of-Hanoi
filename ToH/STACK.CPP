#include<iostream.h>
#include<conio.h>
class stack
{
	int data[50];
	int top1;
	public:
	stack()
	{
		top1=-1;
	}
	void push(int n)
	{
	     top1++;
	     data[top1]=n;
	}
	void pop()
	{
	      if(top1!=-1)
	      {
		 top1-=1;

	      }
	      else
			cout<<"\nERROR : STACK IS EMPTY SO CANT POP";
	}
	int top()
	{
		return data[top1];
	}
	int isempty()
	{
		if(top1==-1)
			return 1;
		return 0;
	}

};
void main()
{
       clrscr();
       stack s1;
       for(int i=10;i<=200;i+=10)
	s1.push(i);
      // s1.push(20);

       s1.pop();
       cout<<"\ntop"<<s1.top();
       while(!s1.isempty())
		s1.pop();

       s1.pop();

       if(!s1.isempty())
	cout<<"\nFULL";
	else
	 cout<<"\nempty";




	getch();
}