#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter two numbers : ";
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
	cout<<"Mean value = "<<mean(x);
	return 0;
}
