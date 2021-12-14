#include "ex.h"
using namespace std  ;
template <class T>
void ex<T>::enqueue(T x)
{
	node *p;
	p=new node;
	p->data=x;
	if(head->next==NULL)
	{
		front=rear=p;
		head->next=p;
		p->next=p;
	}
	else
	{
		rear->next=p;
		p->next=front;
		rear=rear->next;
	}
}

template<class T>
T ex<T>::dequeue()
{
	node *t;
	T x;
	t=front;
	x=t->data;
	front=front->next;
	rear->next=front;
	delete(t);
	return x;
}

template<class T>
void ex<T>::print()
{
	node *p=front;
	do
	{
		cout<<p->data<<endl;
		p=p->next;
	}while(p!=rear->next);
}

template<class T>
void ex<T>::move_next()
{
	front=front->next;
	rear=rear->next;
}
