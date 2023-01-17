#include<iostream>
using namespace std;
class student
{
	public:
		int totalmarks;
		string name;
		int averagemarks;
		
		void getdetailsa()
		{
			cout<<"\n\nenter name of student:";
			cin>>name;
			cout<<"\n\ntotal marks of student:";
			cin>>totalmarks;
			cout<<"\n\naverage marks of students:";
			cin>>averagemarks;
		}
		void putdetailsa()
		{
		cout<<"\n\ntname"<<name;
		cout<<"\n\n\ttotal marks"<<totalmarks;
		cout<<"average marks"<<averagemarks;
	 }
		
};
class studentb:public student
{
	public:
		int totalmarks;
		string name;
		int averagemarks;
		
		void getdetailsb()
		{
			cout<<"\n\nenter name of student:";
			cin>>name;
			cout<<"\n\nttotal marks of student:";
			cin>>totalmarks;
			cout<<"\n\ntaverage marks of student:";
			cin>>averagemarks;
	}
	    void putdetailsb()
	    {
		
	    cout<<"\n\ntname"<<name;
		cout<<"\n\nttotal marks"<<totalmarks;
		cout<<"\n\ntaverage marks"<<averagemarks;
	}
};


int main()
{
	studentb stu1;
	stu1.getdetailsa();
	stu1.putdetailsa();
	stu1.getdetailsb();
	stu1.putdetailsb();
	
	return 0;
}

	