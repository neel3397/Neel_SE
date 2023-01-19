#include<iostream>
using namespace std;

class a
{
	public:
		a()
		{
			cout<<"a's constructor called.";
	  }
};
class b:public a

{
	public:
b()
{
cout<<"b's constructor called.";
}
};
class c:public b

{
public:
c()
{
cout<<"c's constructor called.";
}
};

int main()
{
	c obj;
	return 0;
}
