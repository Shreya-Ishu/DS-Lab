#include<iostream>
using namespace std;
class stack1
{
	char a[20];
	int top;
	public:
		stack1()
		{
			top=-1;
		}
		void push(int num)
		{
			a[++top]=num;
			
			
		}
		int pop()
		{
			return a[top--];
		}
	//	int priority(char);
		void infix_postfix(char* );
};

void stack1::infix_postfix(char expr[20])
{
	char *e,x;
	int b;
	e=expr;
	while(*e!='\0')
	{
		int num;
		if(isdigit(*e))
		{
			num=*e-48;
			
		push(num);
		}
		else 
		 {
		 	int b;
			int a=pop();
			int c=pop();
			if(*e=='+')
			{
				b=a+c;
			}
			else if(*e=='-')
			{
				b=a-c;
			}
			else if(*e=='*')
			{
				b=a*c;
			}
			else if(*e=='/')
			{
				b=a/c;
			
			}
			else if(*e=='^')
			{
				b=a^c;
			}
			push(b);
		}
		e++;
	}
	while(top!=-1)
	{
		cout<<(-pop());
	}
}
int main()
{  
char exp[20];
cin>>exp;
stack1 a;
a.infix_postfix(exp);
return 0;
}
