#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of matrix: ";
	cin>>n;
	int A[3*n-2];
	
	cout<<"enter the elements: ";
	for(int i=0;i<3*n-2;i++)
	{
		cin>>A[i];
	}
	
	int k=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j|| i==j+1 || j==i+1)
			{
				cout<<A[k++]<<" ";
			}
			else
			cout<<"0";
		}
		cout<<endl;
	}
	return 0;
}
