#include<iostream>
using namespace std;

class Time
{
    public :
        int hour,minute,second;
};

int main()
{
    Time d1,d2,D;

    cout << "Enter 1st Time" <<endl;
    cout << "Hour = ";
    cin  >> d1.hour;

    cout << "Minute = ";
    cin  >> d1.minute;

    cout << "Second = ";
    cin  >> d1.second;

    cout << "Enter 2nd Time" <<endl;
    cout << "Hour = ";
    cin  >> d2.hour;

    cout << "Minute = ";
    cin  >> d2.minute;

    cout << "Second = ";
    cin  >> d2.second;

    D.hour = d1.hour + d2.hour;
    D.minute = d1.minute + d2.minute;
    D.second = d1.second + d2.second;

    while(D.second >=60)
    {
        D.second = D.second - 60;
        D.minute++;
    }

    while(D.minute >= 60)
    {
        D.minute = D.minute - 60;
        D.hour++;
    }

    cout <<endl << "Output = " << D.hour << " : " << D.minute << " : " << D.second;

    return 0;
}