#include<iostream>
using namespace std;

class student
{
	public:
		int sid;
		string name;
		float marks;
		
		
		
		void showdetails(int sid,string name,float marks)
		{
			cout<<"\nsid:"<<sid;
			cout<<"\nname:"<<name;
			cout<<"\nmarks:"<<marks;
				
		}
		
		
};
int main()
{
	student neel;
		int sid;
		string name;
		float marks;
	
			cout<<"\nenter sid:";
			cin>>sid;
			fflush(stdin);
			cout<<"\nenter name:";
		//	cin>>name;
		getline(cin,name);
			cout<<"\nenter marks:";
			cin>>marks;
			neel.showdetails(sid,name,marks);
		
	
	
	return 0;
}
	

