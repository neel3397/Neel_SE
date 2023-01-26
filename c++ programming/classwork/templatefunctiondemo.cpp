#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b)
{
	return a+b;
}

int main()
{
	cout<<"\nadd using integer type:"<<add<int>(10,20);
	cout<<"\nadd using float type:"<<add<float>(30.1f,60.2f);
	cout<<"\nadd using string type:"<<add<string>("tops","technologies");
	return 0;
}