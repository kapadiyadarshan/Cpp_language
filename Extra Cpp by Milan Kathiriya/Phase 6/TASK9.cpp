/*
Design a GST Calculator in C++ to find total TAX on
various types of categorized items. Apply proper types of
Indian GST TAX varients based on different types of
Goods. GST have been divided into four GST rates – 5%,
12%, 18%, and 28% by the GST Council.
*/

#include<iostream>
using namespace std;

class GST
{
    private :
        float bill_amount;
        float total_amount;
        float SGST;
        float CGST;
        float gst;

    public :  
        GST()
        {
            cout << "Enter Bill Amount = ";
            cin  >> bill_amount;

            GSTslab();
        }

        void GSTslab()
        {
            int choice;

            cout << "\n----------------------------------------\n";
            cout << "\tPress 1 for add 5% GST\n";
            cout << "\tPress 2 for add 12% GST\n";
            cout << "\tPress 3 for add 18% GST\n";
            cout << "\tPress 4 for add 28% GST\n";
            cout << "\tPress 0 for EXIT\n";
            cout << "----------------------------------------\n";

            cout << "Enter Choice = ";
            cin  >> choice;

            switch(choice)
            {
                case 1 :
                    Five();
                    break;

                case 2 :
                    Twelve();
                    break;

                case 3 :
                    Eighteen();
                    break;

                case 4 :
                    TwentyEight();
                    break;

                default :
                    cout << "Invalid Choice\nTry Again\n";
                    GSTslab();
                    break;
            }
        }

        void Five()
        {
            gst = 2.5;
            
            SGST = ((bill_amount*2.5)/100);
            CGST = ((bill_amount*2.5)/100);

            total_amount = bill_amount + SGST + CGST;

            GetData();
        }

        void Twelve()
        {
            gst = 6;

            SGST = ((bill_amount*6)/100);
            CGST = ((bill_amount*6)/100);

            total_amount = bill_amount + SGST + CGST;

            GetData();
        }

        void Eighteen()
        {
            gst = 9;

            SGST = ((bill_amount*9)/100);
            CGST = ((bill_amount*9)/100);

            total_amount = bill_amount + SGST + CGST;

            GetData();
        }

        void TwentyEight()
        {
            gst = 14;

            SGST = ((bill_amount*14)/100);
            CGST = ((bill_amount*14)/100);

            total_amount = bill_amount + SGST + CGST;

            GetData();
        }

        void GetData()
        {
            system("Cls");

            cout << "\n----------------------------------------\n";
            cout << "\tBill Amount  = " << bill_amount <<endl;
            cout << "\tSGST " << gst << "%      = " << SGST <<endl;
            cout << "\tCGST " << gst << "%      = " << CGST <<endl;
            cout << "\tTotal Amount = " << total_amount <<endl;
            cout << "----------------------------------------\n";
        }
};

int main()
{
    GST o1;
    return 0;
}