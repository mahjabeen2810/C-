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
class xyz
{
	public:
		float avg;
		void mean(float a,float b)
		{
			avg=((a+b)/2);
			cout<<endl<<"Average = "<<avg;	
		}
};
class hjk: public abc,public xyz{
};
int main()
{
	hjk obj;
	int a,b;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	obj.add(a,b);
	obj.mean(a,b);
	return 0;
}
