#include<iostream>
using namespace std;
#define N 10
template<class T>
void sort(T arr[],int size)
{
	for(int i=0;i<size;i++)
	{
	for(int j=i+1;j<size;j++)
	{
		if(arr[i]>arr[j])
		{
			T temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[i]=temp;
		}
    }
}
}

int main()
{
int int_array[N];
float float_array[N];
cout<<"enter integer array elments."<<endl;
for(int i=0;i<N;i++)
{
	cin>>int_array[i];
}
cout<<"enter floating array elements."<<endl;
for(int i=0;i<N;i++)
{
	cin>>float_array[i];
}
sort(int_array,N);
sort(float_array,N);
cout<<"after sorting they are:"<<endl;
for(int i=0;i<N;i++)
{
	cout<<int_array[i]<<", ";
}
cout<<endl;
for(int i=0;i<N;i++)
{
	cout<<float_array[i]<<", ";
}
return 0;
}