#include<iostream>
using namespace std;
class abc
{
	int x,y,z;
	public:
		void read()
		{
			cout<<"Enter three numbers : ";
			cin>>x>>y>>z;	
		}
		void display()
		{
			cout<<endl<<"X = "<<x<<endl<<"Y = "<<y<<endl<<"Z = "<<z;
		}
		operator-()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};
int main()
{
	abc obj;
	obj.read();
	cout<<"Before operator overloading : ";
	obj.display();
	cout<<endl<<"After operator overloading : ";
	-obj;
	obj.display();
	return 0;
}
