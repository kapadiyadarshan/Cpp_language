/*
Aaryan is constantly trying to Check Whether a
character is Vowel or Consonant. But for some unknown
reason he just cannot remember difference between vowel
and consonant. Write a C++ Program to provide a better
solution to Aaryan.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        char c;

    public :
        A()
        {
            cout << "Enter Any Alphabet = ";
            cin  >> c;
            
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                cout << "It's Vowel.....";
            }
            else
            {
                cout << "It's Consonant.....";
            }
        }
};

int main()
{
    A o1;
    return 0;
}