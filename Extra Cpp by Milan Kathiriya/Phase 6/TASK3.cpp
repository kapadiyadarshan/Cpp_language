#include<iostream>
#include<windows.h>
using namespace std;

class Auction
{
    private :
        int a=0;
        int b=0;
        int c=0;
        int choice;

    public :
        Auction()
        {
            do
            {
                system("cls");

            	cout << "--------------------------------------------------" <<endl;
                cout << "press 1 company-1 wants to Bid\n";
                cout << "press 2 company-2 wants to Bid\n";
                cout << "press 3 company-3 wants to Bid\n";
                cout << "press 0 for exit\n";                    
                cout << "--------------------------------------------------" <<endl <<endl;

                cout << "Enter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 :
                        cout << "Enter Bidder amount = ";
                        cin  >> this->a;
                        break;

                    case 2 :
                        cout << "Enter Bidder amount = ";
                        cin  >> this->b;
                        break;

                    case 3 :
                        cout << "Enter Bidder amount = ";
                        cin  >> this->c;
                        break;

                    case 0 :
                        winner();
                        break;

                    default :
                        system("cls");
        
                        cout << "Invalid Choice" <<endl;
                        cout << "Plz try Again" <<endl;
                        Sleep(1000);
                        break;
                }
            }
            while(choice != 0);
        }

        void winner()
        {
            system("cls");
            cout << "--------------------------------------------------------\n";
            cout << "\t\tCongratulation\n";

            if(a>b && a>c)
            {
                cout << "\t  Company-1 win this auction\n";
            }
            else if(b>a && b>c)
            {
                cout << "\t  Company-2 win this auction\n";
            }
            else
            {
                cout << "\t  Company-3 win this auction\n";
            }

            cout << "--------------------------------------------------------\n";
        }
};

int main()
{
    Auction o1;
    return 0;
}