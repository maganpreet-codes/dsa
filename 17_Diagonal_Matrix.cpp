#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of matrix: ";
	cin>>n;
	int A[n];
	
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				cout<<A[i];
			}
			else
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
