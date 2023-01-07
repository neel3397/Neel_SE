#include<iostream>
using namespace std;
class a
{
	public:
		int a;
		
		 void geta()
		 {
		 	cout<<"\nenter a:";
			cin>>a;
		 }
		 
		 void puta()
		 {
		 	cout<<"a="<<a;
		}
};
class b:public a
{
public:
int b;


void getb()
{
cout<<"\n\nenter b:";
cin>>b;
}
void putb()
{
	cout<<"b="<<b;
}

};
class c:public b

{
	public:
		int c;
		
		void getc()
		{
			cout<<"\n\nenter c:";
			cin>>c;
		}
		void putc()
		{
			cout<<"c="<<c;
	  }
};

int main()
{
	c obj2;
obj2.geta();
obj2.getb();
obj2.getc();
obj2.puta();
obj2.putb();
obj2.putc();
return 0;
}








