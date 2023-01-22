#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str[20];
		public:
		void accept_string()
		{
			cout<<"\nenter string      :";
			cin>>str;
		}
		void display_string()
		{
		cout<<str;
		}
		
		string operator+(string x)
		{
		String s;
		strcat(x.str,str);
		strcpy(s.str,str);
		return s;
	}
};
int main()
{
	
	 String str1,str2,str3;
	
	str1.accept_string();
	str2.accept_string();
	
	
	cout<<"\n------------------------------------";
	cout<<"\n\nfirst string is  :";
	str1.display_string();
	
	cout<<"\n\nsecond string is  :";
	str2.display_string();
	
	
	
	cout<<"\n-------------------------------------";
	str3=str1+str2;
	
	cout<<"\n\nconcatenated string is:";
	str.display_string();
	return 0;
}