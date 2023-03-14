#include<iostream>
using namespace std;

class Auction
{
    private :
        int a;
        int b;
        int c;

    public :
        Auction()
        {
            cout << "Enter company-1 Auction Amount = ";
            cin  >> a;

            cout << "Enter company-2 Auction Amount = ";
            cin  >> b;

            cout << "Enter company-3 Auction Amount = ";
            cin  >> c;

            if(a>b && a>c)
            {
                cout << "Company-1 win this aunction\n";
            }
            else if(b>a && b>c)
            {
                cout << "Company-2 win this aunction\n";
            }
            else
            {
                cout << "Company-3 win this aunction\n";
            }
        }
};

int main()
{
    Auction o1;
    return 0;
}