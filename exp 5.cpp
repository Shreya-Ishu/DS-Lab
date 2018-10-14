#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
struct ll
{
	node *top=NULL;
	node *createnode(int x);
	void push();
	void pop();
	void peek();
	
};
node *ll::createnode(int x)
{node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void ll::push()
{
	int x;
	cin>>x;
	node *p;
	p=createnode(x);
	if(top==NULL)
	{
		top=p;
	}
	else
	{
		p->next=top;
		top=p;
	}
}
void ll::pop()
{
	if(top==NULL)
	{
		cout<<"stack is empty";
	}
	else
	{
		node *ptr;
		ptr=top;
		top=top->next;
		delete(ptr);
	}
}
void ll::peek()
{
	node *p1=new node();
	p1=top;
	cout<<top->data;
}
int main()
{
	ll n;
	n.push();
	n.push();
	n.push();
	n.pop();
	n.peek();
	n.peek();
}
