#include<iostream>
using namespace std;

class student
{
	public:
		int sid;
		string name;
		float marks;
		
		void getdetails()
		{
			cout<<"\enter sid:";
			cin>>sid;
			fflush(stdin);
			cout<<"\enter name:";
		//	cin>>name;
		getline(cin,name);
			cout<<"\enter marks:";
			cin>>marks;
		}
		
		void showdetails()
		{
			cout<<"\nsid:"<<sid;
			cout<<"\nname:"<<name;
			cout<<"\nmarks:"<<marks;
			
			
	
			
		}
		
		
};
int main()
{
	student neel;
	neel.getdetails();
	neel.showdetails();
	
	return 0;
}
	

