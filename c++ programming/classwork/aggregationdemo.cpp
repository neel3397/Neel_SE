#include<iostream>
using namespace std;

class Address
{
	public:
		string street,city,state;
		
		Address(string street,string city,string state)
		{
			this->street=street;
			this->city=city;
			this->state=state;
	}
	
};
class employee
{
	private:
		Address *address;
		public:
			int id;
			string name;
			
			employee(int id,string name,Address *address)
			{
				this->id=id;
				this->name=name;
				this->address=address;
			}
			
			void display()
			{
				cout<<"\nid:"<<id;
				cout<<"\nname:"<<name;
				cout<<"\naddress line:"<<address->street;
				cout<<"\ncity:"<<address->city;
				cout<<"\nstate:"<<address->state;
				
		}
};
int main()
{



	Address a1("190 cg road, opp. gls","ahmedabad","gujarat");
	employee e1(19,"neel",&a1);
	e1.display();
	return 0;
}