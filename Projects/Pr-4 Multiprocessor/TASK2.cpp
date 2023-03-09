/*
WAP to add two distances using binary plus (+) operator overloading.
For example,
input1 => km: 3, meter: 1020
input2 => km: 2, meter: 2050
output => km: 8, meter: 70
*/

#include<iostream>
using namespace std;

class Distance
{
    public :
        int km;
        int meter;

        void setData()
        {
            cout << "Enter KM = ";
            cin  >> km;

            cout << "Enter Meter = ";
            cin  >> meter;
        }

        void getData()
        {
            while(this->meter >= 1000)
            {
                this->meter = this->meter - 1000;
                this->km++;
            }

            cout << "km = " <<this->km <<endl;
            cout << "meter = " <<this->meter;
        }

        Distance operator+(Distance x)
        {
            Distance temp;

            temp.km = this->km + x.km;
            temp.meter = this->meter + x.meter;

            return temp;
        }
};

int main()
{
    Distance o1,o2,o3;

    o1.setData();
    o2.setData();

    o3 = o1+o2; // operator+(o2)
    
    o3.getData();

    return 0;
}