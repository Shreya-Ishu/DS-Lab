#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
}*head;
class list{
	list()
	{
		head=NULL;
	}
	node *createnode(int x);
	void ins_end(int r);
	void merge(list,list);
	void display();
};
node *list::createnode(int x)
{
	node *temp=new node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
void list::ins_beg(int r)
{
	int a;
	node *p,*ptr;
	while(n!=0)
	{
		cin>>a;
		p=createnode(a);
		if(head==NULL)
		{
			head=p;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=p;
		}
	}
	n--;
}
void list::merge(list l1,list l2)
{
node *p1,*p2,*c;
p1=l1.head;
p2=l2.head;
if(p1==NULL &&p2==NULL)
{
	cout<<"can't merge";
	}	
else
{
	while(p1!=NULL &&p2!=NULL)
	{
		if(p1->data<p2->data)
		{
		c=p1->data;
		p1=p1->next;	
		}
		else
		{
			c=p2->data;
			p2=p2->next;
		}
		ins_end(c);
	}
	if(p2==NULL)
	{
		while(p1!=NULL)
		{
			t=p1->data;
			ins_end(t);
			p1=p1->data;
		}
	}
	else(p1==NULL)
	{
		while(p2!=NULL)
		{
			t=p2->data;
			ins_end(t);
			p2=p2->data;
		}
	}
}
}
void list::display()
{
	node *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
}
int main()
{
	list l1;
	list l2;
	list l3;
	int n1,n2,r;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>r;
		l1.ins_beg(r);
	}
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>r;
		l2.ins_beg(r);
	}
	l1.display();
	l2.display();
	l3.merge(l1,l2);
	l3.display();
}
