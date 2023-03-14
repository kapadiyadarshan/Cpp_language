/*
Reserve Bank of India pre-defines a Rate of Interest
(ROI) for all banks across the Nation. But some private
sector banks can apply different ROI. Use inheritance and
polymorphism concept to illustrate this scenario.
*/

#include<iostream>
using namespace std;

class RBI
{
    protected :
        float rate;

    public :
        virtual void ROI(float rate) = 0;
};

class SBI : public RBI
{
    public :
        void ROI(float rate)
        {
            cout << "SBI Rate Of Interest is " << rate <<endl;
        }
};

class BOB : public RBI
{
     public :
        void ROI(float rate)
        {
            cout << "BOB Rate Of Interest is " << rate <<endl;
        }
};

class HDFC : public RBI
{
     public :
        void ROI(float rate)
        {
            cout << "HDFC Rate Of Interest is " << rate <<endl;
        }
};

class KOTAK : public RBI
{
     public :
        void ROI(float rate)
        {
            cout << "KOTAK Rate Of Interest is " << rate <<endl;
        }
};

int main()
{
    SBI o1;
    BOB o2;
    HDFC o3;
    KOTAK o4;

    o1.ROI(4.05);
    o2.ROI(5.55);
    o3.ROI(6.45);
    o4.ROI(7.89);

    return 0;
}