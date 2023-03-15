/*
    Nishant trapped in a cyber game, in which he only
    gets some random amount of seconds for determining at
    which exact time he has to leave that game. Wite a C++
    program which converts that seconds into HH:MM:SS format.
*/

#include<iostream>
using namespace std;

class Time
{
    private :
        int h=0;
        int m=0;
        int s=0;

    public :
        Time()
        {
            cout << "Enter Seconds = ";
            cin  >> s;

            while(s >= 60)
            {
                s = s-60;
                m++;
            }
            while(m >= 60)
            {
                m = m-60;
                h++;
            }

            cout << h << ":" << m << ":" << s;
        }
};

int main()
{
    Time o1;
    return 0;
}