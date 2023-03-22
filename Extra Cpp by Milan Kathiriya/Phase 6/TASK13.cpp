#include<iostream>
#include<conio.h>
using namespace std;

class Counter
{
	int count;
	int temp;

	public :
		
		Counter()
		{
			count=0;

			cout << "------------\n";
			cout << "|   000" << count << "   |" <<endl;
			cout << "------------\n";

            while(1)
			{
				temp=0;

				temp = getch();           fflush(stdin);
                system("cls");

                cout << "------------\n";

    			if(temp == 72) 
				{
					count++;

					if(count < 10)
					{
						cout << "|   000" << count << "   |" <<endl;
					}
					else if(count < 100)
					{
						cout << "|   00" << count << "   |" <<endl;
					}
					else if(count < 1000)
					{
						cout << "|   0" << count << "   |" <<endl;
					}
					else
					{
						cout << "|   " << count << "   |" <<endl;
					}
				}

    			else if(temp == 80) 
				{
					count--;

					if(count < 10)
					{
						cout << "|   000" << count << "   |" <<endl;
					}
					else if(count < 100)
					{
						cout << "|   00" << count << "   |" <<endl;
					}
					else if(count < 1000)
					{
						cout << "|   0" << count << "   |" <<endl;
					}
					else
					{
						cout << "|   " << count << "   |" <<endl;
					}
				}

                cout << "------------\n";
			}
        }
};

int main()
{
	Counter o1;
	return 0;
}