#include<iostream>
using namespace std;
class mark
{
	static int t;
	public:
		static void total(int m1,int m2,int m3)
		{
			t=m1+m2+m3;
			cout<<"Total marks scored = "<<t;
		}
};
int mark::t;
int main()
{
	mark obj;
	int m1,m2,m3;
	cout<<"Enter three marks : ";
	cin>>m1>>m2>>m3;
	mark::total(m1,m2,m3);
	return 0;
}
