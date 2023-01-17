#include<iostream>
using namespace std;
class moverload
{
	public:
		
		void common()
		{
			int a=5,b=9;
			cout<<"\naddition is"<<(a+b);
		}
		
		void common(int a)
		{
		if(a%2==0)
		{
		     cout<<"\nit is even.";
		}
		else
		{
		    cout<<"\nit is odd.";
		}
	}
		void common(int a,int b)
		{
			cout<<"\nmultiplication is:"<<(a*b);
		}
		
};

int main()
{
	moverload md;
	md.common();
	md.common(5);
	md.common(45,67);
	return 0;


}