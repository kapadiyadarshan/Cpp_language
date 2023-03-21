/*
Nayan bet ₹.1200 to his friend Kartik if he find
frequency of each characters in given String. Whereas
Dhruv bet ₹.1500 to his friend Piyush if he finds it
first. Provide a C++ program to help this fellows so that
they can play this interesting game.
*/

#include<iostream>
using namespace std;

class A
{
    private :
        char a[100];
        char x;
        int count,i;

    public :
        A()
        {
            cout << "Enter Any String = ";      fflush(stdin);
            gets(a);

            cout << "------------------------------------------------------------\n";
            cout << "\t Capital Alphabets\n";
            cout << "------------------------------------------------------------\n";

            for(x='A'; x<='Z'; x++)
            {
                count=0;

                for(i=0; a[i]!='\0'; i++)
                {
                    if(a[i]==x)
                    {
                        count++;
                    }
                }

                if(count > 0)
                {
                    cout << x << " is " << count << " Times" <<endl;
                }
            }

            cout << "------------------------------------------------------------\n";
            cout << "\t Small Alphabets\n";
            cout << "------------------------------------------------------------\n";

            for(x='a'; x<='z'; x++)
            {
                count=0;

                for(i=0; a[i]!='\0'; i++)
                {
                    if(a[i]==x)
                    {
                        count++;
                    }
                }

                if(count > 0)
                {
                    cout << x << " is " << count << " Times" <<endl;
                }
            }

            cout << "------------------------------------------------------------\n";\
            cout << "\t Numbers\n";
            cout << "------------------------------------------------------------\n";

            for(x='0'; x<='9'; x++)
            {
                count=0;

                for(i=0; a[i]!='\0'; i++)
                {
                    if(a[i]==x)
                    {
                        count++;
                    }
                }

                if(count > 0)
                {
                    cout << x << " is " << count << " Times" <<endl;
                }
            }
        }
};

int main()
{
    A o1;
    return 0;
}