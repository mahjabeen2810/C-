#include<iostream>
using namespace std;
class abc
{
	public:
		int sum;
		void add(int a,int b)
		{
			sum=a+b;
			cout<<"Sum = "<<sum;	
		}
};
class xyz: public abc{
};
int main()
{
	xyz obj;
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	obj.add(a,b);
	return 0;
}
