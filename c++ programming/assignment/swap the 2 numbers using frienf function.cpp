#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	cout<<"before swap a="<<a<<"b="<<b<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<"after swap a="<<a<<"b="<<b<<endl;
	return 0;
}
