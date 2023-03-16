/*
1. WAP to overload < operator to find which object
contains higher value from given 2 numbers.
*/
#include<iostream>
using namespace std;

class A
{
	public :
		int x;
		
		void setData()
		{
			cout<<"Enter The Value Of X:";
			cin>>this->x;
		}
		
		void getData()
		{
			cout<<"X :"<<this->x<<endl;
		}
		
		bool operator<(A n)
		{
			if(this->x<n.x)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	A o1,o2;
	cout<<"Object o1 :"<<endl;
	o1.setData();
	cout<<"Object o2 :"<<endl;
	o2.setData();
	o1.getData();
	o2.getData();
	
	if(o1<o2)
	{
		cout<<"Object 2 Contains Higer Values."	;
	}
	else
	{
		cout<<"Object 1 Contains Higher Values.";
	}
	
}