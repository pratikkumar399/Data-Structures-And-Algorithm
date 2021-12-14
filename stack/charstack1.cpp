#include<iostream>
using namespace std;
#define Max 100
class stack{
	public:
		int top;
		int size;
		int *s;
		int stack[Max];
		
		void push()
		{
			int value;
			if(top==size-1)
			{
				cout<<"overflow";
			}
			else
			{
				cout<<"Enter value to push \n";
				cin>>value;
				top++;
				stack[top]=value;
			}
		}
		int pop()
		{
			if(top==-1)
			{
				cout<<"Underflow";
			}
			else
			{
				cout<<"Deleted value is \n"<<stack[top];
				top--;
			}
		}
		void display()
		{
			int i;
			for(i=top;i>=0;i--)
			{
				cout<<stack[i]<<endl;
			}
		}
};
int main()
{
	stack st;
	cout<<"Enter the size of the stack";
	cin>>st.size;
	st.s=new int[st.size];
	st.top=-1;
	int ch;
	while(st.size!=0)
	{	
	cout<<endl<<"    #####       STACK MENU     #####     "<<endl;
	cout<<"1. PUSH OPERATION \n2. POP OPERATION \n3. DISPLAY \n4.Exit \n";
	cin>>ch;
	switch(ch)
	{
		case 1: 
		    st.push();
		    break;
		case 2:
			st.pop();
			break;
		case 3:
			st.display();
			break;
		case 4:
			exit(0);
			
		default:cout<<"\n Choose correct option";
	}
}
return 0;
}