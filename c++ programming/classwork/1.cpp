#include<iostream>
using namespace std;

class sample
{
	public:
		static int objcount;
		sample()
		{
			cout<<"/ndefault customer called.";
			objcount++;
		}
};

int sample::objcount=0;

int main()

{
sample s1,s2,s3,s4,s5,s6,s7;
cout<<"\n\nobject count:"<<s1.objcount;

return 0;
}