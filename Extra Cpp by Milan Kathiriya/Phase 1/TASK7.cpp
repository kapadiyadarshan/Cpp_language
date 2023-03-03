/*
Priyank needs to find an average of three numbers to
gain required passing marks in exam. Write a C++ Program
to helps Priyank to solve his issue.
*/

#include<iostream>
using namespace std;

class Marks
{
    private :
        float maths;
        float science;
        float english;
        float avg;

    public :
        Marks()
        {
            cout << "Enter Maths Marks = ";
            cin  >> maths;

            cout << "Enter Science Marks = ";
            cin  >> science;

            cout << "Enter English Marks = ";
            cin  >> english;

            avg = (maths+science+english)/3;

            cout << "\nAverage is = " << avg ;
        }
};

int main()
{
    Marks o1;
    return 0;
}