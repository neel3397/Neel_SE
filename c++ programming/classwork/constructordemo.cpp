#include<iostream>
using namespace std;

class sample
{
	public:
		string fname,lname;
		int age;
		
		sample()
		{
			cout<<"\ndefault constructor called";
		}
		sample(string f, string l,int a)
		{
		cout<<"\nparametirezed constructor called";
		fname=f;
		lname=l;
		age=a;
		}
		sample(const sample &obj)
		{
			cout<<"\n\ncopy constructor called.";
			fname=obj.fname;
			lname=obj.lname;
			age=obj.age;
		}
		
		void display()
		{
		
		cout<<"\n\n first name:"<<fname<<"\nlast name:"<<lname<<"\nage:"<<age;
	    } 
};


int main()
{
	sample vivek , obj1("harshit","vadodariya",24);
	sample obj2("neel","deda",25);
	obj1.display();
	obj2.display();
	sample obj3(obj2);
	obj3.display();
	return 0;
	
}