#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    int H,M,S,A,DK;

    DK = A = 0;

    while(DK==0)
    {
        cout << "Enter Hour = ";
        cin  >> H;
        cout << "Enter Minutes = ";
        cin  >> M;
        cout << "Enter Seconds = ";
        cin  >> S;

        if(H<24 && M<60 && S<60)
        {
            DK++;
        }
        else
        {
            system("cls");
        }
    }

    while(A==0)
    {
        system("cls");

        cout << H << ":" << M << ":" << S <<endl;
        Sleep(1000);
        S++;

        if(S > 59)
        {
            S=0;
            M++;
        }
        if(M > 59)
        {
            M=0;
            H++;
        }
        if(H > 23)
        {
            H=0;
        }
    }
    return 0;
}