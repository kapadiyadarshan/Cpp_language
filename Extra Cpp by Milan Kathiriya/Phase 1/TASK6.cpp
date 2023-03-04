/*
An IT company wants to generate random number of 6
digits long and send it to its employees. Write a C++
Program to help this IT company.
*/

#include<iostream>
#include<time.h>
using namespace std;

class Random
{
    public :
        int number;
        int lower;
        int upper;

        Random()
        {
            srand(time(NULL));

            lower = 100000;
            upper = 999999;

            number = (rand() % (upper - lower + 1)) + lower;

            cout << number;
        }
};

int main()
{
    Random o1;
    return 0;
}