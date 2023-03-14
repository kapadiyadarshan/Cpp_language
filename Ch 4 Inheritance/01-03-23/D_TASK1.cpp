#include<iostream>
using namespace std;

class RBI
{
    public :
        float rate;

        void ROI(float rate);
};

class SBI : public RBI
{
    public :
        void ROI(float rate)
        {
            cout << "SBI Rate Of Intrest = " <<rate <<endl;
        }
};

class BOB : public RBI
{
    public :
        void ROI(float rate)
        {
            cout << "BOB Rate Of Intrest = " <<rate <<endl;
        }
};

class ICICI : public RBI
{
   public :
        void ROI(float rate)
        {
            cout << "ICICI Rate Of Intrest = " <<rate <<endl;
        }
};

int main()
{
    SBI s;
    BOB b;
    ICICI i;

    s.ROI(5.00);
    b.ROI(6.15);
    i.ROI(9.75);

    return 0;
}
