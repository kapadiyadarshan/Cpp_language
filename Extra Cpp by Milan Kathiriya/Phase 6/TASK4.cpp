#include<iostream>
using namespace std;

class Cashew
{
    private :
        int production = 123500;
        int profit = 78000;
        int revenue;

    public :
        Cashew()
        {
            // affter 3 months
            production = production*10;
            profit = profit*10;

            revenue = (profit*12)/3;

            cout << "Company Revenue is = " << revenue;
        }
};


int main()
{
    Cashew o1;
    return 0;
}