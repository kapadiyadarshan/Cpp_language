#include<iostream>
#include<string.h>
using namespace std;

class superMarket
{
    private :
        int item_number;
        char item_name[100];
        int item_quantity;
        float item_price;
        int discount;

    public :
        float totalAmount,netAmount;

        void setData()
        {
            cout << "Enter item number = "; 
            cin  >> item_number;

            cout << "Enter item name = ";       fflush(stdin);
            gets(item_name);

            cout << "Enter item quantity = "; 
            cin  >> item_quantity;

            cout << "Enter item price = "; 
            cin  >> item_price;

            cout << "Enter discount = "; 
            cin  >> discount;
        }

        void getData()
        {
            cout << "item Number = "    << item_number  <<endl;
            cout << "item Name = "      << item_name    <<endl;
            cout << "item Quantity = "   << item_quantity<<endl;
            cout << "item Price = "     << item_price   <<endl;
            cout << "item discout = "   << discount     <<endl;

            //float totalAmount,netAmount;
            totalAmount = item_quantity*item_price;
            netAmount = totalAmount - ((discount*totalAmount)/100);

            cout << "Total Amount = "   << totalAmount  <<endl;
            cout << "Net Amount = "     << netAmount    <<endl;
        }
};

class user
{
    char id[100];
    char password[100];

    public :
    void setData()
    {
        cout << "Enter User id = ";           fflush(stdin);
        gets(this->id);

        cout << "Enter User password = ";           fflush(stdin);
        gets(this->password);
    }

    int check(char id[],char password[])
    {
        if((strcmp(this->id,id)==0) && (strcmp(this->password,password)==0))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};

int main()
{
    int choice,n=0,m=0,i;
    user U[50];
    superMarket P[100];

    do
    {  
        cout << "\n-----------------------------------------------------\n";
        cout << "Press 1 for add user\n";
        cout << "Press 2 for add item\n";
        cout << "Press 3 for for purchase\n";
        cout << "Press 0 for exit\n";
        cout << "-----------------------------------------------------\n\n";

        cout << "Enter Your Choice = ";
        cin  >> choice;
        cout << "\n-----------------------------------------------------\n\n";

        switch(choice)
        {
            case 1 :
                U[n].setData();
                n++;
                break;

            case 2 :
                P[m].setData();
                m++;
                break;

            case 3 :
                float totalBill=0;
                int tmp;
                char id[100];
                char password[100];

                cout << "Enter id = ";          fflush(stdin);
                gets(id);

                cout << "Enter password = ";            fflush(stdin);
                gets(password);

                for(i=0; i<n; i++)
                {
                    tmp = U[i].check(id,password);
                }

                if(tmp==0)
                {
                    for(i=0; i<m; i++)
                    {
                        P[i].getData();

                        cout << "\n-----------------------------------------------------\n\n";

                        totalBill = totalBill + P[i].netAmount;
                    }
                    cout << "Total Bill = " << totalBill << "/- Rs";
                }
                else
                {
                    cout << "user not found\n";
                }
            break;
        }
        
    } while(choice!=0);
    
    return 0;
}