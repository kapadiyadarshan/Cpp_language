#include<iostream>
using namespace std;

class Darshan
{
    public :
            int bread=0;
            int wheat=0;
            int milk=0;
            int soup=0;
            int frozen_food=0;
            int cheese=0;
            
        void Admin()
        {
            system("cls");
            m :
            int user_id;
            int password;

            cout << "Enter User Id = ";
            cin  >> user_id;

            cout << "Enter Password = ";
            cin  >> password;

            if((user_id == 1234) && (password == 1234))
            {
                general();
            }
            else
            {
                cout << "Please Try Again\n";
                goto m;
            }
        }

        void general()
        {
            system("cls");
            int choice;

            cout << "press 1 for add grossary item\n";
            cout << "press 2 for update your cart\n";
            cout << "press 3 for delete your cart\n";
            cout << "press 4 for Bill\n";

            cout << "Enter Your Choice = ";
            cin  >> choice;

            switch(choice)
            {
                case 1:
                    add();
                    break;

                case 2 :
                    update();
                    break;

                case 3 :
                    Delete();
                    break;

                case 4 :
                    bill();
                    break;
            }
        }

        void add()
        {
            system("cls");
            m :
            
            int choice;

            do
            {
                system("cls");

                cout << "Press 1 for Add Bread\n";
                cout << "Press 2 for Add Wheat\n";
                cout << "Press 3 for Add Milk\n";
                cout << "Press 4 for Add Soup\n";
                cout << "Press 5 for Add Frozen Food\n";
                cout << "Press 6 for Add Cheese\n";
                cout << "Press 0 for Exit\n";

                cout << "\nEnter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 : 
                        cout << "Bread quantity = ";
                        cin  >> bread;
                        break;
                    
                    case 2 : 
                        cout << "Wheat quantity = ";
                        cin  >> wheat;
                        break;

                    case 3 : 
                        cout << "Milk quantity = ";
                        cin  >> milk;
                        break;

                    case 4 : 
                        cout << "Soup quantity = ";
                        cin  >> soup;
                        break;

                    case 5 : 
                        cout << "Frozen Food quantity = ";
                        cin  >> frozen_food;
                        break;

                    case 6 : 
                        cout << "Cheese quantity = ";
                        cin  >> cheese;
                        break;

                    case 0 :
                    general();
                        break;

                    default :
                        cout << "Invalid Choice \nPlease Try Again\n\n";

                    goto m;
                }
            }while(choice!=0);
        }

        
        void update()
        {
            m :
            int choice;

            do
            {
                system("cls");

                cout << "Press 1 for Update Bread\n";
                cout << "Press 2 for Update Wheat\n";
                cout << "Press 3 for Update Milk\n";
                cout << "Press 4 for Update Soup\n";
                cout << "Press 5 for Update Frozen Food\n";
                cout << "Press 6 for Update Cheese\n";
                cout << "Press 0 for Exit\n";

                cout << "\nEnter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 : 
                        cout << "Bread quantity = ";
                        cin  >> bread;
                        break;
                    
                    case 2 : 
                        cout << "Wheat quantity = ";
                        cin  >> wheat;
                        break;

                    case 3 : 
                        cout << "Milk quantity = ";
                        cin  >> milk;
                        break;

                    case 4 : 
                        cout << "Soup quantity = ";
                        cin  >> soup;
                        break;

                    case 5 : 
                        cout << "Frozen Food quantity = ";
                        cin  >> frozen_food;
                        break;

                    case 6 : 
                        cout << "Cheese quantity = ";
                        cin  >> cheese;
                        break;

                    case 0 :
                        general();
                        break;

                    default :
                        cout << "Invalid Choice \nPlease Try Again\n\n";

                    goto m;
                }
            }while(choice!=0);
        }

        void Delete()
        {
            m :
            int choice;

            do
            {
                system("cls");
                cout << "Press 1 for Delete Bread\n";
                cout << "Press 2 for Delete Wheat\n";
                cout << "Press 3 for Delete Milk\n";
                cout << "Press 4 for Delete Soup\n";
                cout << "Press 5 for Delete Frozen Food\n";
                cout << "Press 6 for Delete Cheese\n";
                cout << "Press 0 for Exit\n";

                cout << "\nEnter Choice = ";
                cin  >> choice;

                switch(choice)
                {
                    case 1 : 
                        bread = 0;
                        break;
                    
                    case 2 : 
                        wheat = 0;
                        break;

                    case 3 : 
                        milk = 0;
                        break;

                    case 4 : 
                        soup = 0;
                        break;

                    case 5 : 
                        frozen_food = 0;
                        break;

                    case 6 : 
                        cheese = 0;
                        break;

                    case 0 :
                    general();
                        break;

                    default :
                        cout << "Invalid Choice \nPlease Try Again\n\n";

                    goto m;
                }
            }while(choice!=0);
        }

        void bill()
        {
            system("cls");

            int wallet_amount;
            int return_amount;
            int total_bill = (bread*35 + wheat*66 + milk*32 + soup*20 + frozen_food*130 + cheese*16);

            cout << "-------------------------------------------------------\n";
            cout << "             --: Krishna Super Store :--\n";
            cout << "-------------------------------------------------------\n";

            cout << "No.    item            Rate    qty        Total    \n";
            cout << "1      Bread           35       " << bread << "          " << bread*35 <<"\n";
            cout << "2      Wheat           66       " << wheat << "          " << wheat*66 <<"\n";
            cout << "3      Milk            32       " << milk << "          " << milk*32 <<"\n";
            cout << "4      soup            20       " << soup << "          " << soup*20 <<"\n";
            cout << "5      Frozen food     130      " << frozen_food << "          " << frozen_food*130 <<"\n";
            cout << "6      Cheese          16       " << cheese << "          " << cheese*16 <<"\n";

            cout << "\n                               Total Bill = " << total_bill;

            cout << "\n\n\nEnter Wallet Amount = ";
            cin  >> wallet_amount;

            return_amount = wallet_amount - total_bill;

            system("cls");

            cout << "-------------------------------------------------------\n";
            cout << "             --: Krishna Super Store :--\n";
            cout << "-------------------------------------------------------\n";

            cout << "No.    item            Rate    qty        Total    \n";
            cout << "1      Bread           35       " << bread << "          " << bread*35 <<"\n";
            cout << "2      Wheat           66       " << wheat << "          " << wheat*66 <<"\n";
            cout << "3      Milk            32       " << milk << "          " << milk*32 <<"\n";
            cout << "4      soup            20       " << soup << "          " << soup*20 <<"\n";
            cout << "5      Frozen food     130      " << frozen_food << "          " << frozen_food*130 <<"\n";
            cout << "6      Cheese          16       " << cheese << "          " << cheese*16 <<"\n";

            cout << "\n                               Total Bill = " << total_bill;
            cout << "\n                            Wallet Amount = " << wallet_amount;
            cout << "\n                                   Return = " << return_amount;

            cout << "\n\n                  THANK YOU";
            cout << "\n                 VISIT AGAIN\n";
            cout << "-------------------------------------------------------\n";
        }
};

int main()
{
    Darshan o1;

    o1.Admin();
    return 0;
}