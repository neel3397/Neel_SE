#include<iostream>
using namespace std;
class scopedemo
{
	public:
		string name,address="ahmedabad",area="nehrunagar";
		int age=25;
		
		void getname();
		void getdetails();
};
void scopedemo::getname()
{
	cout<<"\nenter name:";
	getline(cin,name);
}

void scopedemo::getdetails()
{
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
	cout<<"\naddress:"<<address;
	cout<<"\narea:"<<area;
}


int main()
{
	scopedemo s1;
	s1.getname();
	s1.getdetails();
	
	
	
	
	
	return 0;
}
