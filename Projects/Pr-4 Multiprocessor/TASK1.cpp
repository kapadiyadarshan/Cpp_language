/*
WAP to create a Message class with a constructor that takes a single string with
a default value. Create a private member string, and in the constructor simply 
assign the argument string to your internal string. Create two overloaded member 
functions called print( ): one that takes no arguments and simply prints the 
message stored in the variable, and one that takes a string argument, 
which it prints in addition to the internal message.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Message
{
	private :
		string dk;
	
	public :
		Message();
		
		Message(string dk)
		{
		
			this->dk = dk;
		}
		
		void print()
		{
			cout<<"This Message is come from No-Arguments print() ."<<endl<<endl;
			cout<<this->dk<<endl;
			cout<<endl<<"------------------------------------"<<endl;
		}
		
		void print(string a)
		{
			cout<<"This Message is come from with Arguments print()."<<endl;
			cout<< a <<endl;
		}
};

int main()
{
	string s;
	cout <<"Enter the string :";
	cin  >> s;

	cout <<endl <<"----------------------------------------"<<endl;

	Message o1(s);
	o1.print();
	
	cout <<"Enter String for Parameterized print() :";
    cin  >> s;
      
	cout <<endl<<"--------------------------------------------"<<endl;
	o1.print(s);
	return 0;
	
}