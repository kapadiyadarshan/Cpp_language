/*
A brand new smart device which meant to convert total
provided Days Into Years, Weeks and Days. But for some
technical interruption, that device stops working
properly. Write a C++ Program to provide a solution for
this.
*/

#include<iostream>
using namespace std;

class Time
{
    private :
        int year;
        int month;
        int day;

    public :
        Time()
        {
            month=0;
            year=0;

            cout << "Enter Days = ";
            cin  >> day;

            while(day >= 30)
            {
                day = day-30;
                month++;
            }

            while(month >= 12)
            {
                month = month-12;
                year++;
            }

            cout << "Year = " << year <<endl;
            cout << "Month = " << month <<endl;
            cout << "Day = " << day;
        }
};

int main()
{
    Time o1;
    return 0;
}