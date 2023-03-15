/*
    Design a Calculator for an arithmetic operations in
    which user can do all basic operations as many times he/
    she wants until he/she exit from that. Use C++ as a
    primary language to accomplish this challenge.
*/

#include<iostream>
using namespace std;

class Calculator
{
    private :
        float n1;
        float n2;
        int choice;

    public :
        Calculator()
        {
            do
            {
                cout << "Enter Number 1 = ";
                cin  >> n1;

                cout << "Enter Number 2 = ";
                cin  >> n2;

                cout << "---------------------------------------------\n";
                cout << "Press 1 for addition\n";
                cout << "Press 2 for subtraction\n";
                cout << "Press 3 for Multiplication\n";
                cout << "Press 4 for Division\n";
                cout << "Press 0 for Exit\n";
                cout << "---------------------------------------------\n";

                cout << "Enter choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 :
                        system("cls");
                        cout << "-----------------\n"; 
                        cout << "| "  << n1 << " + " << n2 << " = " << n1+n2 << " |" <<endl;
                        cout << "-----------------\n\n";
                        break;

                    case 2 :
                        system("cls");
                        cout << "-----------------\n"; 
                        cout << "| "  << n1 << " - " << n2 << " = " << n1-n2 << " |" <<endl;
                        cout << "-----------------\n\n";
                        break;

                    case 3 :
                        system("cls");
                        cout << "-----------------\n"; 
                        cout << "| "  << n1 << " * " << n2 << " = " << n1*n2 << " |" <<endl;
                        cout << "-----------------\n\n";
                        break;

                    case 4 :
                        system("cls");
                        cout << "-----------------\n"; 
                        cout << "| "  << n1 << " / " << n2 << " = " << n1/n2 << " |" <<endl;
                        cout << "-----------------\n\n";
                        break;

                    case 0 :
                        break;

                    default :
                        cout << "Invalid Choice\n";
                }
            }
            while(choice != 0);
        }
};

int main()
{
    Calculator o1;
    return 0;
}