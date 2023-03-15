/*
    Design an EMI Calculator for deciding accurate EMI
    price of ex-showroom car models to help an executive to
    easily guide his consumers. Use C++ to build this type of
    system.
*/

#include<iostream>
#include<math.h>
using namespace std;

class EMI
{
    private :
        float p;
        float r;
        float t;
        float emi;

    public :
        EMI()
        {
            cout << "Enter Principal Value = ";
            cin  >> p;

            cout << "Enter Rate of interest = ";
            cin  >> r;

            cout << "Enter Time Duration = ";
            cin  >> t;

            r = r / (12*100);
            t = t * 12;

            emi = (p*r*pow(1+r,t)) / (pow(1+r,t)-1);

            cout << "-------------------------------------\n";
            cout << "Monthly EMI = " << emi <<endl;
            cout << "-------------------------------------\n";
        }
};

int main()
{
    EMI o1;
    return 0;
}