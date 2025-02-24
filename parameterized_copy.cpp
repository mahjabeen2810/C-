#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
		abc()
		{
			cout<<"Enter two numbers : ";
			cin>>x>>y;
		}
		void display()
		{
			cout<<endl<<"X = "<<x<<endl<<"Y = "<<y;
		}
		abc(const abc & p1)
		{
			x=p1.x;
			y=p1.y;
		}
};
int main()
{
	abc p1;
	cout<<"After implementing parameterized constructor : ";
	p1.display();
	cout<<endl<<"After implementing copy constructor : ";
	abc p2=p1;
	p2.display();
}
