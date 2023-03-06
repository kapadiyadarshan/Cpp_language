/*
Gaurav must have to teach his little 5 years old baby
to check whether a given year is leap year or not. Write
a C++ Program to provide a solution for Gaurav.
*/

#include<iostream>
using namespace std;

class Year
{
    private :
        int year;

    public :
        Year()
        {
            cout << "Enter Year = ";
            cin  >> year;

            if(year % 4 == 0)
            {
                cout << year << " Is A Leap Year.....";
            }
            else
            {
                cout << year << " Is Not A Leap Year..... ";
            }
        }
};

int main()
{
    Year o1;
    return 0;
}