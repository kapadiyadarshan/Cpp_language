/*
    Create a Calculator in C++ by using all types of user
    defined functions. User can perform all types of basic
    arithmetic operations until he/she wants.
*/

#include<iostream>
using namespace std;

class Calculator
{
    private :
        float n1,n2;
        char choice;

    public :
        Calculator()
        {
            system("cls");

            do
            {
                cout << "-----------------------------------------------\n";
                cout << "Press + For Addition\n";
                cout << "Press - For Subtraction\n";
                cout << "Press * For Multiplication\n";
                cout << "Press / For Divison\n";
                cout << "Press 0 For Exit\n";
                cout << "-----------------------------------------------\n";

                cout << "Enter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case '+' :
                        Addition();
                        break;

                    case '-' :
                        Subtraction();
                        break;

                    case '*' :
                        Multiplication();
                        break;

                    case '/' :
                        Divison();
                        break;

                    case '0' :
                        break;

                    default :
                        cout << "Invalid Choice\n";
                }
            }
            while(choice!=0);
        }

        void Addition()
        {
            cout << "Enter Number 1 = ";
            cin  >> n1;

            cout << "Enter Number 2 = ";
            cin  >> n2;

            system("cls");
            cout << "--------------\n";
            cout << n1 << " + " << n2 << " = " << n1+n2 <<endl;
            cout << "--------------\n";
        }

        void Subtraction()
        {
            cout << "Enter Number 1 = ";
            cin  >> n1;

            cout << "Enter Number 2 = ";
            cin  >> n2;

            system("cls");
            cout << "--------------\n";
            cout << n1 << " - " << n2 << " = " << n1-n2 <<endl;
            cout << "--------------\n";
        }

        void Multiplication()
        {
            cout << "Enter Number 1 = ";
            cin  >> n1;

            cout << "Enter Number 2 = ";
            cin  >> n2;

            system("cls");
            cout << "--------------\n";
            cout << n1 << " * " << n2 << " = " << n1*n2 <<endl;
            cout << "--------------\n";
        }

        void Divison()
        {
            cout << "Enter Number 1 = ";
            cin  >> n1;

            cout << "Enter Number 2 = ";
            cin  >> n2;

            system("cls");
            cout << "--------------\n";
            cout << n1 << " / " << n2 << " = " << n1/n2 <<endl;
            cout << "--------------\n";
        }
};

int main()
{
    Calculator o1;
    return 0;
}