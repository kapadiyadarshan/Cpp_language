#include<iostream>
using namespace std;

class Complex
{
	private :
		float real,imaginary;
		
	public :
		
		void setData()
		{
			cout<<"Enter first(real) value : ";
			cin>>this->real;
			cout<<"Enter second(imaginary) value : ";
			cin>>this->imaginary;
		}
		
		Complex operator+(Complex n)
		{
			Complex tmp;
			tmp.real=this->real+n.real;
			tmp.imaginary=this->imaginary+n.imaginary;
			return tmp;
		}
		
		Complex operator-(Complex n)
		{
			Complex tmp;
			tmp.real=this->real-n.real;
			tmp.imaginary=this->imaginary-n.imaginary;
			return tmp;
		}
		
		Complex operator*(Complex n)
		{
			Complex tmp;
			tmp.real=this->real*n.real-this->imaginary*n.imaginary;
			tmp.imaginary=this->real*n.imaginary+n.real*this->imaginary;
			return tmp;
		}
		
		Complex operator/(Complex n)
		{
			Complex temp;
        	temp.real = ((this->real * n.real) + (this->imaginary * n.imaginary))/(n.real*n.real + n.imaginary*n.imaginary);
        	temp.imaginary = ((this->imaginary * n.real) - (this->real * n.imaginary))/(n.real*n.real + n.imaginary*n.imaginary);
        	return temp;
		}
		
		void getData()
		{
			cout<<this->real<<" + "<<this->imaginary << "i";
			
		}
};

int main()
{
    int choice;

	Complex c1;
	Complex c2;
	Complex c3;

	c1.setData();
	c2.setData();

	cout<<"\nComplex Number 1 : ";
	c1.getData();
    
	cout<<"\nComplex Number 2 : ";
	c2.getData();

    cout << "\n-----------------------------------------------\n\n";
    cout << "Press 1 for Addition\n";
    cout << "Press 2 for Subtraction\n";
    cout << "Press 3 for Multiplation\n";
    cout << "Press 4 for Division\n";
    cout << "Press 0 for exit\n";
    cout << "-----------------------------------------------\n\n";

    cout << "Enter Choice = ";
    cin  >> choice;

    switch(choice)
    {
        case 1 :
            system("cls");
            cout<<"\n\n------------------------------------------\n\n";

            cout<<"Addition Of Complex Number : ";
            c3 = c1 + c2;
            c3.getData();

            cout<<"\n\n------------------------------------------\n\n";
            break;

        case 2 :
            system("cls");
            cout<<"\n\n------------------------------------------\n\n";
            
            cout<<"Substraction Of Complex Number : ";
            c3 = c1 - c2;
            c3.getData();

            cout<<"\n\n------------------------------------------\n\n";
            break;

        case 3 :
            system("cls");
            cout<<"\n\n------------------------------------------\n\n";
	
            cout<<"Multiplication Of Complex Number : ";
            c3 = c1 * c2;
            c3.getData();

            cout<<"\n\n------------------------------------------\n\n";
            break;

        case 4 :
            system("cls");
            cout<<"\n\n------------------------------------------\n\n";
	
            cout<<"Division Of Complex Number : ";
            c3 = c1 / c2;
            c3.getData();

            cout<<"\n\n------------------------------------------\n\n";
            break;

        case 0 :
            break;

        default :
            cout << "Invalid Choice\n";
            cout << "Try Again\n";
    }
	
	return 0;
}