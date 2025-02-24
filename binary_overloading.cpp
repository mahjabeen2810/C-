#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		complex()
		{
		}
		complex(int real,int imag)
		{
			x=real;
			y=imag;
		}
		complex operator+(complex c)
		{
			complex temp;
			temp.x=x+c.x;
			temp.y=y+c.y;
			return temp;
		}
		void display()
		{
			cout<<x<<"+i"<<y;
		}
};
int main()
{
	complex c1,c2,c3;
	int a,b,c,d;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	cout<<"Enter another two numbers : ";
	cin>>c>>d;
	c1=complex(a,b);
	c2=complex(c,d);
	c3=c1+c2;
	cout<<"C1 = ";
	c1.display();
	cout<<endl<<"C2 = ";
	c2.display();
	cout<<endl<<"C3 = ";
	c3.display();
	return 0;
}
