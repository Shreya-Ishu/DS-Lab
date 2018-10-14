#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct clinkedlist
{
	node *head,*tail;
	clinkedlist()
	{
		head=NULL;
		tail=NULL;
	}
node *createnode(int x);
void ins_beg();
void del();
void display();
};
node* clinkedlist::createnode(int elm)
{
node *temp=new node;
temp->data=elm;
temp->next=temp;
return temp;
	
}

void clinkedlist::ins_beg()
{
		int elm;
	cin>>elm;
	node *p,*ptr;
	p=createnode(elm);
	if(head==NULL)
	{
		head=p;
		tail=p;
		
	}	
	else
	{
		p->next=head;
	
		tail->next=p;
		
		head=p;
	}
}
void clinkedlist::del()
{
		node *p,*ptr;
	if(head==NULL)
	{
		head=p;
		tail=p;
	}
	else
	{
	head=head->next;
	tail->next=head;
	}
}
void clinkedlist::display()
{
	node *ptr;
	if(head==NULL)
	{
		cout<<"linked list is empty";
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			cout<<ptr->data<<"->";
			ptr=ptr->next;
		}
		cout<<ptr->data<<"->";
		ptr=ptr->next;
		cout<<ptr->data;
	}
}
int main()
{
	clinkedlist l;
	int a,b;
	cin>>b;
	while(b!=0)
	{
		cin>>a;
		switch(a)
		{
			
			case 2:
				l.ins_beg();
				break;
			case 3:
				l.del();
				break;
			case 4:
				l.display();
				break;
		}
		b--;
	}
}
