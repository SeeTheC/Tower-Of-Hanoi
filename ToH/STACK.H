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
	int length()
	{
		return top1+1;

	}

};
