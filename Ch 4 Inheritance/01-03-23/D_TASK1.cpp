#include<iostream>
using namespace std;

class RBI
{
    public :
        float rate;

        void ROI(float rate,string bank)
        {
            cout << bank << " Rate of intrest is " << rate << " %"<<endl;
        }
};

class SBI : public RBI
{
    
};

class BOB : public RBI
{

};

class ICICI : public RBI
{
   
};

int main()
{
    SBI s;
    BOB b;
    ICICI i;

    s.ROI(5.00,"SBI");
    b.ROI(6.15,"BOB");
    i.ROI(9.75,"ICICI");

    return 0;
}
