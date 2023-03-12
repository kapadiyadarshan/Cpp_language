/*
Prince wants to create a 24 Hr time convertor app in
C++. In this app, user can provide any 24 Hr time he/she
wants but output must be produced in 12 Hr format.
For example,
i/p: 15 Hr, 32 Minutes
o/p: 3:32 PM
*/

#include<iostream>
using namespace std;

class Time
{
    private :
        int hour;
        int minute;

    public :
        Time()
        {
            cout << "Enter 24 Hours Time\n";

            cout << "Enter Hour = ";
            cin  >> hour;

            cout << "Enter Minute = ";
            cin  >> minute;

            TwelveHour();
        }

        void TwelveHour()
        {
            if(hour > 12)
            {
                hour = hour - 12;

                if(minute < 10)
                {
                    cout << "12 Hour Time \n";
                    cout << hour << ":0" << minute << " PM";
                }
                else
                {
                    cout << "12 Hour Time \n";
                    cout << hour << ":" << minute << " PM";
                }
            }
            else
            {
                if(minute < 10)
                {
                    cout << "12 Hour Time \n";
                    cout << hour << ":0" << minute << " AM";
                }
                else
                {
                    cout << "12 Hour Time \n";
                    cout << hour << ":" << minute << " AM";
                }
            }
        }
};

int main()
{
    Time o1;
    return 0;
}