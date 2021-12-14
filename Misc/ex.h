#include<iostream>
template <class T>
class ex
{
	private:
		struct node
		{
			T data;
			struct node *next;
		};
		struct node *head,*front,*rear;
	public:
		ex()
		{
			head=new node;
			head->next=NULL;
			front=rear=head;
		}
		void enqueue(T x);
		T dequeue();
		void print();
		void move_next();
};
