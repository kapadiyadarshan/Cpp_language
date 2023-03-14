#include<iostream>
using namespace std;

/*
    WAP to implement exception handling mechanism for
    different types of scenarios:
    - a number cannot be divide by zero
    - a person cannot be able to vote if his/her age is less
    than 18
    - a password cannot be validate if it doesn’t contains
    an uppercase letter
*/

class Divide
{
    private :
        int a;
        int b;

    public :
        Divide()
        {
            cout << "Enter a = ";
            cin  >> a;

            cout << "Enter b = ";
            cin  >> b;

           try
           {
                if(b==0)
                {
                    throw 15;
                }
                else
                {
                    cout << a << " divided " << b << " is equal to " << a/b <<endl;
                }
            }
            catch(int n)
            {
                cout << "Can't be divided zero....";
            }
        }
};

class Age
{
    private :
        int age;

    public :
        Age()
        {
            cout << "Enter Age = ";
            cin  >> age;
        
            try
            {
                if(age < 18)
                {
                    throw 12;
                }
                else
                {
                    cout << "You can vote....." <<endl;
                }
            }
            catch(int n)
            {
                cout << "you can't Vote..." <<endl;
            }
        }
};

class Paasword
{
    private :
        char pass[100];
        int counter=0;
        int i;

    public :
        Paasword()
        {
            cout << "Enter Password = ";        fflush(stdin);
            gets(pass);

            try
            {
                for(i=0; pass[i]!='\0'; i++)
                {
                    if(pass[i]>='A' && pass[i]<='Z')
                    {
                        throw 12;
                    }
                    else
                    {
                        throw 'o';
                    }
                }
            }
            catch(int n)
            {
                cout << "password is valid...";
            }
            catch(char n)
            {
                cout << "plz enter one uppercase charcter...";
            }
        }
};

int main()
{
    Divide o1;

    Age o2;

    Paasword o3;
    return 0;
}