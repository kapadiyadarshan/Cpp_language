#include<iostream>
using namespace std;

class Bank
{
    private :
        char name[100];
        int account_number;
        int phone_number;
        char email[100];

    public :
        void setData()
        {
            cout << "Enter The Name Of Staff           : ";        fflush(stdin);     
            gets(this->name);

            cout << "Enter The Account Number Of Staff : ";                            
            cin >> this->account_number;

            cout << "Enter The Phone Number Of Staff   : ";                            
            cin >> this->phone_number;

            cout << "Enter The E-mail Of Staff         : ";        fflush(stdin);      
            gets(this->email);
        }

        void getData()
        {
            cout << "Name                : " <<this->name   <<endl; 
            cout << "Account Number      : " <<this->account_number <<endl; 
            cout << "Phone Number        : " <<this->phone_number   <<endl; 
            cout << "E-mail              : " <<this->email  <<endl; 
        }

        void darshan()
        {
            int choice,withdraw,deposite;
            int initial_amount = 200000;

            cout << "Press 1 to Deposite the Money :" <<endl;
            cout << "Press 2 to Transfer the Money :" <<endl;
            cout << "Press 3 to Withdraw the Money :" <<endl;

            cin  >> choice;

            system("cls");

            switch(choice)
            {
                case 1 :
                    cout << "\n----------------------------------------------------------------------\n\n";
                    cout << "Deposite the money = ";
                    cin  >> deposite;
                    cout << "\n----------------------------------------------------------------------\n\n";

                    cout << "Your Actual Amount Is = " << initial_amount <<endl <<endl;
                    cout << "Congrates Your Amount Has Deposite Successfully.......\n\n";
                    cout << "Your Account Balance Is = " << initial_amount + deposite;
                    break;
                case 2 :
                    break;
                case 3 :
                    cout << "\n----------------------------------------------------------------------\n";
                    cout << "Withdraw the money = ";
                    cin  >> withdraw;
                    cout << "\n----------------------------------------------------------------------\n\n";

                    if(withdraw <= initial_amount)
                    {
                        cout << "Your Actual Amount Is = " << initial_amount <<endl <<endl;
                        cout << "Congrates Your Amount Has Withdraw Successfully.......\n\n";
                        cout << "Your Account Balance Is = " << initial_amount - withdraw;
                    }
                    else
                    {
                        cout << "Not enough money in your account \n\n";
                    }
                    break;
            }

        }
};

int main()
{
    char choice;
    int initial_amount = 200000;

    Bank A,S;
    system("cls");

    cout << "          -: BANK MANAGMENT SYSTEM :-          " <<endl;
    cout << "----------------------------------------------------------\n\n\n";

    cout << "          -: Designed N Programed By :-          " <<endl;
    cout << "----------------------------------------------------------\n";
    cout << "               DARSHAN KAPADIYA           " <<endl<<endl<<endl;

    cout << "                 -: Trainer :-          " <<endl;
    cout << "----------------------------------------------------------\n";
    cout << "                MILAN KATHIRIYA           " <<endl<<endl;

    cout << "Press Any Key N Enter To Continue..................\n\n";
    
    //system("cls");

    cout << "----------------------------------------------------------------------\n";
    cout << "Press A to Log in as Administrator Or S to log in as STAFF \n";
    cout << "----------------------------------------------------------------------\n";

    cin >> choice;

    system("cls");

    switch(choice)
    {
        case 'A':
            cout << "----------------------------------------------------------------------\n";
            cout << "               -: Welcome As ADMINISTRATOR :- \n";
            cout << "----------------------------------------------------------------------\n";

            A.setData();

            system("cls");

            cout << "----------------------------------------------------------------------\n";
            A.getData();
            cout << "----------------------------------------------------------------------\n";

            S.darshan();
            break;
        case 'S':
            cout << "----------------------------------------------------------------------\n";
            cout << "               -: Welcome As STAFF :- \n";
            cout << "----------------------------------------------------------------------\n";

            S.setData();

            system("cls");

            cout << "----------------------------------------------------------------------\n";
            S.getData();
            cout << "----------------------------------------------------------------------\n";

            S.darshan();
            break;
    }

    return 0;
}