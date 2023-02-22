#include<iostream>
using namespace std;

class dis
{ 
    public :
        int feet,inch;
};

int main()
{
    dis d1,d2,sum;

    cout << "Enter 1st Distance" <<endl;
    cout << "feet = ";
    cin  >> d1.feet;

    cout << "inch = ";
    cin  >> d1.inch;

    cout << "Enter 2nd Distance" <<endl;
    cout << "feet = ";
    cin  >> d2.feet;

    cout << "inch = ";
    cin  >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    while(sum.inch >= 12)
    {
        sum.inch = sum.inch - 12;
        sum.feet++;
    }

    cout << sum.feet << " feet " << sum.inch << " inch ";

    return 0;
}