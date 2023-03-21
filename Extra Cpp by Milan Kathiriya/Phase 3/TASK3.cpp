#include<iostream>
using namespace std;

class Authentication
{
    private :
        char email[100];
        char password[100];
        int i;
        int isDigit=0, isUpper=0, isLower=0, isSymbol=0;

    public :
    Authentication()
    {
        cout << "Enter E-mail = ";      fflush(stdin);
        gets(email);

        cout << "Enter Password = ";    fflush(stdin);
        gets(password);

        for(i=0; password[i]!='\0'; i++)
        {
            if(password[i]>=48 && password[i]<=57)
            {
                isDigit=1;
            }
            if(password[i]>=65 && password[i]<=90)
            {
                isUpper=1;
            }
            if(password[i]>=90 && password[i]<=122)
            {
                isLower=1;
            }
            else
            {
                isSymbol=1;
            }
        }

        if(isDigit==1 && isUpper==1 && isLower==1 && isSymbol==1)
        {
            cout << "Password is Valid\n";
        }
        else
        {
            cout << "A password must contain at least one digit, one special symbol, one lowercase letter and one uppercase letter while user try to register";
        }
    }
        
};

int main()
{
    Authentication o1;
    return 0;
}