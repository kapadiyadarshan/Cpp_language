/*
    Prepare a Calculator which only performs Circle
    related mathematical operations like finding Area of
    Circle, Perimeter of Circle and Conversion of radius into
    Diameter. All operations are continuous until user wish
    to exit. By using C++, create this calculator for a batch
    of bacholers.
*/

#include<iostream>
using namespace std;

class Circle
{
    private :
        float r;
        int choice;

    public :
        Circle()
        {
            cout << "Enter Circle Radius = ";
            cin  >> r;

            do
            {
                cout << "---------------------------------------\n";
                cout << "Press 1 for Area of Circle\n";
                cout << "Press 2 for Perimeter of Circle\n";
                cout << "Press 3 for Diameter of Circle\n";
                cout << "Press 0 for Exit\n";
                cout << "---------------------------------------\n\n";

                cout << "Enter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 :
                        system("cls");
                        cout << "---------------------------\n";
                        cout <<"| " << "Area of Circle = " << 3.14*r*r <<" |" <<endl;
                        cout << "---------------------------\n";
                        break;

                    case 2 :
                        system("cls");
                        cout << "--------------------------------\n";
                        cout <<"| " << "Perimeter of Circle = " << 2*3.14*r <<" |" <<endl;
                        cout << "--------------------------------\n";
                        break;

                    case 3 :
                        system("cls");
                        cout << "---------------------------\n";
                        cout <<"| " << "Diameter of Circle = " << 2*r <<" |" <<endl;
                        cout << "---------------------------\n";
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
    Circle o1;
    return 0;
}