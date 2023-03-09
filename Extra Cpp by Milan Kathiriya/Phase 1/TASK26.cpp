/*
Develop a simple comparision system which identify if
given number is Palindrome or not. By this system, a bank
employee will appriciate your help. Write a C++ program
for developing this system.
*/

#include<iostream>
using namespace std;

class Palindrom
{
    public :
        int n;
        int number;

        Palindrom()
        {
            int remainder,reverese=0;

            cout << "Enter Number = ";
            cin  >> n;

            number = n;

            while(n != 0)
            {
                remainder = n%10;
                reverese = reverese*10+remainder;
                n=n/10;
            }

            if(reverese == number)
            {
                cout << "Number is Palindrom....";
            }
            else
            {
                cout << "Number is not palindrom....";
            }
        }
};

int main()
{
    Palindrom o1;
    return 0;
}