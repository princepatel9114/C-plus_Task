#include <iostream>
using namespace std;
class bank
{
    int sb = 0, x;

public:
    bank()
    {
        char a;
        cout << "Enter the option from the following : \na-Withdraw\nb-Deposit\nc-ShowBalance \n Option : ";
        cin >> a;
        if (a == 'a')
        {
            int w;
            cout << "Enter the amount of withdrawal :";
            cin >> w;
            sb -= w;
        }
        else if (a == 'b')
        {
            int d;
            cout << "Enter the amount of Deposit : ";
            cin >> d;
            sb += d;
        }
        else if (a == 'c')
        {
            cout << "Your Balance is " << sb;
        }
        else
        {
            cout << "Invalid response!!";
        }
    }

    bank(int z)
    {
        x = z;
        char a;
        cout << "Enter the option from the following : \na-Withdraw\nb-Deposit\nc-ShowBalance \n Option : ";
        cin >> a;
        if (a == 'a')
        {
            int w;
            cout << "Enter the amount of withdrawal :";
            cin >> w;
            sb -= w;
        }
        else if (a == 'b')
        {
            int d;
            cout << "Enter the amount of Deposit : ";
            cin >> d;
            sb += d;
        }
        else if (a == 'c')
        {
            cout << "Your Balance is " << sb;
        }
        else
        {
            cout << "Invalid response!!";
        }
    }
};
int main()
{
    bank p1;
}