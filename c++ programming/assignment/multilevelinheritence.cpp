#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_number;
		public:
			void get_number(int);
			void put_number(void);
};

void student::get_number(int a)
{
	roll_number =a;
}

void student::put_number()
{
	cout<<"Roll Number:"<<roll_number<<endl;
}


class test:public student

{
protected:
float sub1;
float sub2;
public:

void get_marks(float,float);
void put_marks(void);
};

void test::get_marks(float x,float y)
{
sub1=x;
sub2=y;
}
void test::put_marks()
{
	cout<<"marks in sub1="<<sub1<<endl;
	cout<<"marks in sub2="<<sub2<<endl;
}
class result:public test
{
	float total;
	public:
		void display();
};


    
	float total;
	
		int roll_number;
		float sub1;
		
		float sub;
		
			void get_number(int);
			void put_number(void);
			void get_marks(float,float);
			
			void put_marks(void);
		
			void display(void);
			
			
			void result::display(void)
			{
				total=sub1+sub2;
				put_number();
				put_marks();
				cout<<"total="<<total<<endl;
			}
			
			Void main()
			{
			result student;
			student.get_number(800);
			student.get_marks(80,90);
			student.display();
			
			}
