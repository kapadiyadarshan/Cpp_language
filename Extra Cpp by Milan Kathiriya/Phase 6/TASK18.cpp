/*
    Help Ayush to perfom given operation:
    a. Assume any number
    b. Add 8 in that number
    c. Multiply it with 3
    d. Subtract 12 from it
    e. Add another 5 into that
    f. Add your birth year in it
    g. Subtract current year from that
    Finally display which number he get after perfrming all
    above mentioned operations and find is it divisible by 7
    or not.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        int n;
        int a,b,c,d,e,f,temp;

    public :
        A()
        {
            cout << "Enter any number = ";
            cin  >> this->n;

            temp = ((((((n+8)*3)-12)+5)+2000)-2023);

            a = n+8;
            b = a*3;
            c = b-12;
            d = c+5;
            e = d+2000;
            f = e-2023;

            cout << temp <<endl;
            cout << f <<endl;

            if(f%7==0)
            {
                cout << f << " number is divided by 7........";   
            }
            else
            {
                cout << f << " number is not divided by 7........"; 
            }
        }
};

int main()
{
    A o1;
    return 0;
}