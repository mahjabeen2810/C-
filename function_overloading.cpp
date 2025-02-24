#include<iostream>
using namespace std;
class shapes
{
	float temp;
	public:
		void area(int r)
		{
			temp=3.14*r*r;
			cout<<"Area of circle = "<<temp;	
		}
		void area(int l,int b)
		{
			temp=l*b;
			cout<<"Area of rectangle = "<<temp;
		}
};
int main()
{
	shapes obj;
	int ch,r,l,b;
	cout<<"1)CIRCLE"<<endl<<"2)RECTANGLE"<<endl<<"3)EXIT"<<endl<<"Enter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1 :cout<<"Enter the radis of the cicle : ";
				cin>>r;
				obj.area(r);
				break;
		case 2 :cout<<"Enter length and breadth of rectangle : ";
				cin>>l>>b;
				obj.area(l,b);
				break;
		case 3 :cout<<"EXIT!";
				break;
		default :cout<<"INVALID CONDITION!";	
	}
	return 0;
}
