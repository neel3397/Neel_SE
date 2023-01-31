#include<iostream>
using namespace std;

class biggest
{
	private:
		int a,b;
		public:
			void input();
			void display();
};
void biggest::input()
{
	cout<<"enter 2 nos.:";
	cin>>a>>b;
}
void biggest::display()
{
if(a>b)
cout<<"biggest no.:"<<a;
else
cout<<"biggest no.:"<<b;
}
int main()
{
	biggest b;
	b.input();
	b.display();
	return 0;
}