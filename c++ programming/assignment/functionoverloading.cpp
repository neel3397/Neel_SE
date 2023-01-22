#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	cout<<"enter the operator(+,-,*,/):";
	cin>>op;
	
	
	if(op=='+')
	cout<<endl<<"addition result="<<num1+num2;
	else if(op=='-')
	cout<<endl<<"subtraction result="<<num1-num2;
	else if(op=='*')
	cout<<endl<<"multiplication result="<<num1*num2;
	else if(op=='/')
	cout<<endl<<"division result="<<num1/num2;
	else
	cout<<endl<<"wrong operator!";
	return 0;
}