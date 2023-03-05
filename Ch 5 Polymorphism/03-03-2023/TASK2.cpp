/*
WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes
*/

#include<iostream>
using namespace std;

class Cricket
{
    public : 
        void getTotalOvers()
        {
            cout << "T20 matches are of 20 overs";
            cout << "Test matchs are of 90 overs";
        }
};

class T20Match : public Cricket
{
    public : 
        void getTotalOvers()
        {
            cout << "T20 matches are of 20 overs" <<endl;
        }
};

class TestMatch : public Cricket
{
    public : 
        void getTotalOvers()
        {
            cout << "Test matchs are of 90 overs" <<endl;
        }
};

int main()
{
    T20Match o1;
    TestMatch o2;

    o1.getTotalOvers();
    o2.getTotalOvers();
    return 0;
}

