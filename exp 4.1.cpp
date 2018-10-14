#include<iostream>
using namespace std;
struct node
{
	struct node *prv,*next;
	int data;
	};
struct linkedlist
{
	node *head,*tail;
	linkedlist()
	{
		head=NULL;
		tail=NULL;
	}
	node *createnode(int x);
	void insert_beg();
	void display();
	void insert_end();
	void after_ins();
	void before_ins();
	void sort();
 } ;
 node *linkedlist::createnode(int x)
 {
 	node *temp=new node;
 	temp->prv=NULL;
 	temp->data=x;
 	temp->next=NULL;
 	return temp;
 }
 void linkedlist::insert_beg()
 {
 	int elm;
 	cin>>elm;
 	node *p;
 	p=createnode(elm);
 	if(head==NULL)
 	{
 		head=p;
	 }
	 else
	 {
	 	p->next=head;
	 	head->prv=p;
	 	head=p;
	 }
 }
  void linkedlist::before_ins()
 {
 	int elm,x;
 	cin>>elm;
 	cin>>x;
 	node *p,*ptr,*ptr1;
 	p=createnode(elm);
 	if(head==NULL)
 	{
 		head=p;
	 }
	 else
	 {
	 ptr=head;
	 while(ptr->next->data!=x)
	 {
	 	ptr=ptr->next;
	 }
	 ptr1=ptr->next;
	 ptr->next=p;
	 p->prv=ptr;
	 p->next=ptr1;
	 ptr1->prv=p;
	 }
 }
  void linkedlist::after_ins()
 {
 	int elm;
 	cin>>elm;
 	int x;
 	cin>>x;
 	node *p,*ptr,*ptr2;
 	p=createnode(elm);
 	if(head==NULL)
 	{
 		head=p;
	 }
	 else
	 {
	 	ptr=head;
	 	
	 	while(ptr->data!=x)
	 	{
	 		ptr=ptr->next;
		 }
		 ptr2=ptr->next;
		 ptr->next=p;
		 p->prv=ptr;
		 p->next=ptr2;
		 ptr2->prv=p;
		 }
 }
  void linkedlist::insert_end()
 {
 	int elm;
 	cin>>elm;
 	node *p,*ptr;
 	ptr=head;
 	p=createnode(elm);
 	if(head==NULL)
 	{
 		head=p;
	 }
	 else
	 {
	 	while(ptr->next!=NULL)
	 	{
	 		ptr=ptr->next;
		 }
	 	ptr->next=p;
	 	p->prv=ptr;
	 	}
 }
   void linkedlist::sort()
 {
 	int elm;
 	cin>>elm;
 	
 	node *p,*ptr,*ptr2;
 	ptr=head;
 	p=createnode(elm);
 	if(head==NULL)
 	{
 		head=p;
	 }
	 else
	 {
		ptr=head;
		while(ptr->data<elm )
		{
			ptr=ptr->next;
		}
		ptr2=ptr->next;
			ptr->next=p;
			p->prv=ptr;
			p->next=ptr2;
			ptr2->prv=p;
	}
 }
 void linkedlist::display()
 {
 	node *ptr;
 	if(head==NULL)
 	{
 		cout<<"ll is empty";
	 }
	 else
	 {
	 	ptr=head;
	 	while(ptr!=NULL)
	 	{
	 		cout<<ptr->data<<"<->";
	 		ptr=ptr->next;
		 }
	 }
 }
 
 int main()
 {
 	linkedlist l;
 	int a;
 	while(1)
 	{
 		cin>>a;
 		cout<<"enter your choice"<<endl;
 		cout<<"enter 1 to insert in begning"<<endl;
 		cout<<"press 2 to display "<<endl;
 		cout<<"press 3 to insert in end"<<endl;
 		cout<<"press 4 to insert after a given node"<<endl;
 		cout<<"press 5 to insert into a sorted list"<<endl;
 		switch(a)
 		{
 			case 1:
 				l.insert_beg();
 				break;
 			case 2:
 				l.display();
 				break;
 			case 3:
 				l.insert_end();
 				break;
 			case 4:
 				l.after_ins();
 				break;
 			case 5:
 				l.before_ins();
 				break;
 			case 6:
 				l.sort();
 				break;
		 }
	 }
 }
