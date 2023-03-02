#include<iostream>
using namespace std;

class RBI
{
    public :
        float rate;

        void ROI()
        {
            cout << "Rate of intrest is " << this->rate <<endl;
        }
};

class SBI : public RBI
{
    public :
        float rate = 5.07;
};

class BOB : public RBI
{
    public :
        float rate = 6.07;
};

class ICICI : public RBI
{
    public :
        float rate = 7.07;
};

int main()
{
    SBI o1;
    BOB o2;
    ICICI o3;

    o1.ROI();
    o2.ROI();
    o3.ROI();

    return 0;
}
