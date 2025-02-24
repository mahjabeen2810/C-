#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter any two numbers : ";
			cin>>a>>b;
		}
		friend float mean(sample x);
};
float mean(sample x)
{
	return((x.a+x.b)/2);
}
int main()
{
	sample x;
	x.getdata();
	int a,b;
	cout<<"Average : "<<mean(x);
	return 0;
}

