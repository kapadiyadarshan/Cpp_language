#include<iostream>
using namespace std;

class train
{
    public :
        int train_number;
    private :
        char train_name[100];
        char source[100];
        char destination[100];
        char time[100];

    public :
    train()
    {
        cout << "Train Number = ";
        cin  >> this->train_number;

        cout << "Train Name = ";        fflush(stdin);
        gets(this->train_name);

        cout << "Source = ";        fflush(stdin);
        gets(this->source);

        cout << "Destination = ";        fflush(stdin);
        gets(this->destination);

        cout << "Time = ";        fflush(stdin);
        gets(this->time);

        cout <<endl <<"---------------------------------------"<<endl;
    }

    void getData()
    {
        cout << "Train Number = " << this->train_number <<endl
             << "Train Name = "  << this->train_name <<endl
             << "Source = "  << this->source <<endl
             << "Destination = "  << this->destination <<endl
             << "Time = "  << this->time <<endl;
    }
};

int main()
{
    int n,i,number,DK=0;
    cout << "How many trains details you are add = ";
    cin  >> n;

    train T[n];

    cout <<endl <<"---------------------------------------"<<endl;

    cout << "Choose Your Train =  ";
    cin  >> number;

    for(i=0; i<n; i++)
    {
        if(T[i].train_number == number)
        {
            T[i].getData();
            DK = 1;
        }
    }

    if(DK == 0)
    {
        cout << "Train is not found in our data";
    }

    return 0;
}