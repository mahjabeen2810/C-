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
class hjk:public xyz{
};
int main()
{
	hjk obj;
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	obj.add(a,b);
	return 0;
}
