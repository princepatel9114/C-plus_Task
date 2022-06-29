#include <iostream>
using namespace std;
int main()
{
    int i, n, d, w, sb = 2500;
    do
    {
        cout << "\nYour Current Balance is " << sb << "\n";
        cout << "\nEnter the option from the following : \n1-Deposit\n2-Withdraw \n9-Show_balance \n0-Exit \n Option : ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        switch (n)
        {
        case 1:
            cout << "\n Enter deposit amount :";
            cin >> d;
            sb += d;
            break;
        case 2:
            cout << "\n Enter Withdraw amount : ";
            cin >> w;
            sb -= w;
            break;
        case 9:
            cout << "\n Your Revised balance is  " << sb;
            break;
        default:
            cout << "\n Wrong Choice ";
            break;
        }
    } while (n <= 50);
}