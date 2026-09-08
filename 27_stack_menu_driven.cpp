#include<iostream>
using namespace std;
# define MAX 5
class stack{
	int arr[MAX];
	int top;
	
	public:
		stack(){
			top=-1;
		}
	void push()
	{
		int value;
		if(top==MAX-1){
			cout<<"Stack is full"<<endl;
		}
		else
		{
			cout<<"Enter the value to push: ";
			cin>>value;
			top++;
			arr[top]=value;
			cout<<value<<"pushed into stack"<<endl;
		}
	}
	void pop(){
		if(top==-1){
			cout<<"Stack is empty!"<<endl;
		}
		else{
			cout<<arr[top]<<"popped from stack"<<endl;
			top--;
		}
	}
	void isEmpty(){
		if(top==-1)
		cout<<"Stack is empty."<<endl;
		else
		cout<<"Stack is not Empty."<<endl;
	}
	void isFull(){
		if(top==MAX-1){
		cout<<"Stack is full."<<endl;
	}
		else{
		cout<<"Stack is not Full."<<endl;
	}
	}
	void display(){
		if(top==-1)
		{
			cout<<"Stack is Empty!"<<endl;
		}
		else
		{
			cout<<"Stack elements are: ";
			for(int i=top;i>=0;i--)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			}
		}
	void peek()
	{ 
		if(top==-1)
		{
			cout<<"Stack is Empty!"<<endl;
		}
		else{
			cout<<"Top element is:"<<arr[top]<<endl;
		}
	}
};
int main()
{
	stack s;
	int choice;
	
	do
	{
		cout<<"\n-----STACK MENU-----"<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.IsEmpty"<<endl;
		cout<<"4.IsFull"<<endl;
		cout<<"5.Display"<<endl;
		cout<<"6.Peek"<<endl;
		cout<<"7.Exit"<<endl;
		
		cout<<"Enter your choice:";
		
		cin>>choice;
		
		switch(choice){
			case 1:
				s.push();
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.isEmpty();
				break;
			case 4:
				s.isFull();
				break;
			case 5:
				s.display();
				break;
			case 6:
				s.peek();
				break;
			case 7:
				cout<<"Exiting program..."<<endl;
				break;
			default:
				cout<<"Invalid choice!"<<endl;
			}
		}
		while(choice!=7);
		return 0;
}
