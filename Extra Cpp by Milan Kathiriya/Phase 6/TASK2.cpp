#include<iostream>
using namespace std;

class Bank
{
    private :
        int previous_bal = 18000;
        int add = 120000;
        int account_bal;
        int withdraw;
        int deposit;

    public :
        Bank()
        {
            int choice;

            account_bal = previous_bal + add;

            cout << "\n--------------------------------------------\n";
            cout << "Press 1 for Withdraw money\n";
            cout << "Press 2 for Deposit money\n";
            cout << "Press 0 for Exit\n";
            cout << "--------------------------------------------\n";

            cout << "Enter Choice = ";
            cin  >> choice;

            switch(choice)
            {
                case 1 :
                    Withdraw();
                    break;

                case 2 :
                    Deposit();
                    break;

                case 0 :
                    break;

                default :
                    cout << "Invalid Choice\n";
            }
        }

        void Withdraw()
        {
            cout << "Enter Withdraw money = ";
            cin  >> withdraw;

            account_bal = account_bal - withdraw;

            system("cls");
            cout << "Withdraw Money = " << withdraw <<endl;
            cout << "Account Balance = " << account_bal <<endl;
        }

        void Deposit()
        {
            cout << "Enter Deposit money = ";
            cin  >> deposit;

            account_bal = account_bal + deposit;

            system("cls");
            cout << "Deposit Money = " << deposit <<endl;
            cout << "Account Balance = " << account_bal <<endl;
        }
};

int main()
{
    Bank o1;
    return 0;
}