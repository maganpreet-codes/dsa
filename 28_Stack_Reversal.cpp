#INCLUDE <IOSTREAM>
#include string
using namespace std;
#define MAX 100
class Stack
{
	char arr[MAX];
	int top;
	
	public:
		Stack()
		{
			top=-1;
		}
		
		void push(char ch)
		{
			if(top==MAX-1)
			{
				cout<<"Stack is Full"<<endl;
			}
			else
			{
				top++;
				arr[top]=ch;
			}
		}
		
		char pop()
		{
			if(top==-1)
			{
				return '\0';
			}
			else
			{
				return arr[top--];
			}
		}
};
int main()
{
	Stack s;
	char str[MAX];
	
	cout<<"Enter a string:";
	cin>>str;
	
	for(int i=0;str[i]!='\0';i++)
	{
		s.push(str[i]);
	}
	
	cout<<"Reversed string:";
	
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<s.pop();
	}
	return 0;
}
