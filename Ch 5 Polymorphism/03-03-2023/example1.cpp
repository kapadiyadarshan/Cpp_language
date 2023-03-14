#include<iostream>
using namespace std;

// Method OverLoading

class A
{
	public :
		void truck()
		{
			cout << "Truck is Empty...." <<endl;	
		}
		void truck(int n)
		{
			cout << "Truck is Running with " << n << " Passengers....." <<endl;	
		}
		void truck(int n,double m)
		{
			cout << "Truck is Running with " << n << " Passengers and with " << m << " goods";	
		}	
};

int main()
{
	A o1;
	
	o1.truck();
	o1.truck(10);
	o1.truck(15,112.5f);
	return 0;
}