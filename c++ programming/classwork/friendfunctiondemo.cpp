#include<iostream>
using namespace std;

class neel
{
	private:
		int money;
		friend int yash(neel);
		
		public:
		neel()
		{
			money=0;
	}
};

int yash(neel h)
{
	h.money=10000;
	return h.money;
}

int main()
{
	neel h;
	cout<<"\nyash has given rs."<<yash(h)<<"to neel.";
	return 0;
}