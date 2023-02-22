#include<iostream>
using namespace std;

class Time
{
    public :
        int second;
};

int main()
{
    Time t1;
    int H,M,S;

    cout << "Enter Time (sec) = ";
    cin  >> t1.second;

    M = t1.second / 60;
    S = t1.second % 60;

    H = M / 60;
    M = M % 60;

    cout <<endl <<"output = " << H << ":" << M << ":" << S ;

    return 0;
}