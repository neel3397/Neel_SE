#include<iostream>
using namespace std;

int main()
{
	char ab;
	float num1,num2;
	
	cout<<"enter operator :+,-,*,/";
	cin>>ab;
	
	cout<<"enter two operands:";
	cin>>num1>>num2;
	
	switch(ab)
	{
		case'+':
		cout<<num1<<"+"<<num2<<"="<<num1+num2;
		break;
		
		case'-':
		cout<<num1<<"-"<<num2<<"="<<num1-num2;
		break;
	    
	    case'*':
		cout<<num1<<"*"<<num2<<"="<<num1*num2;
		break;
		
		case'/':
		cout<<num1<<"/"<<num2<<"="<<num1/num2;
		break;
		
		default:
			cout<<"error !operator is not correct";
			break;
}
    return 0;

}
