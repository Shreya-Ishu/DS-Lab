#include<iostream>
using namespace std;
class queue
{
	int arr[10],c;
	int f,r;
	public:
		queue()
		{
			f==-1;
			r==-1;
		}
		void enqueue(int);
		int dequeue();
		int front();
		int rear();
		void display();
};
void queue::enqueue(int x)
{
	if(f==-1 && r==-1)
	{
		f++;
		r++;
		arr[f]=x;
	}
	else if(r!=4)
	{
		if(r+1==f)
		{
			cout<<"Overflow";
		}
		else
		{
		r++;
		arr[r]=x;
	}
	}
		else if(r==4)
	{
		r=0;
		if(r!=f)
		{
		arr[r]=x;
	}
		else
		cout<<"Overflow";
	}
}
int queue::dequeue()
{
	if(f==-1 &&r==-1)
	{
		cout<<"underflow";
	}
	else
	{

 	return	arr[f++];
 	}
}
int queue::front()
{
	return arr[f];
}
int queue::rear()
{
	
	return arr[r];

}
void queue::display()
{
	for(int i=f;i<=r;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	queue q;
	int a;
	int d,e;
	while(1)
	{
	cin>>a;
	switch(a)
	{
		case 1:
			int n,c;
			
			for(int i=0;i<5;i++)
			{
			cin>>n;
			q.enqueue(n);
			}
			break;
		case 2:
			q.dequeue();
			break;
		case 3:
		 	cout<<q.front();
			
			break;
		case 4:
			cout<<q.rear();
			
			break;
		case 5:
			q.display();
			break;
		case 6:
			
			cin>>n;
			q.enqueue(n);
			break;
	}
}
}
