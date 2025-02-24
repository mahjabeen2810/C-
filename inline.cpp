#include<iostream>
using namespace std;
class abc
{
	public:
		int cube(int s);
};
inline int abc::cube(int s)
{
	return (s*s*s);
}
int main()
{
	abc obj;
	int s;
	cout<<"Enter a value to find its cube : ";
	cin>>s;
	cout<<"Cube of "<<s<<" : "<<obj.cube(s);
	return 0;
}
