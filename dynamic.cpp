#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int *ptr;
	cout<<"Enter the number of elements : ";
	cin>>n;
	ptr=new int[n];
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>*(ptr+i);
	}
	cout<<"DISPLAYING VALUES : ";
	for(i=0;i<n;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	delete []ptr;
	return 0;
}
