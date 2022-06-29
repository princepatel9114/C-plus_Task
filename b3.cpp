#include <iostream>
using namespace std;
class bank
{
    float bal = 0;

public:
    void deposit_ammount()
    {
        int d_amt;
        cout << "\n Enter deoposite ammount :";
        cin >> d_amt;
        bal += d_amt;
        cout << "\n  " << d_amt << " is added in your bank";
    }
    void withdraw_ammount()
    {
        int w_amt;
        cout << "\n Enter withdraw ammount :";
        cin >> w_amt;
        if (w_amt > bal)
        {
            cout << "\n you not able to withdraw";
        }
        else
        {
            bal -= w_amt;
        }
    }
    void display()
    {
        cout << "\n  total ammount in your bank is :" << bal;
    }
};

int main()
{
    bank b;
    b.deposit_ammount();
    b.withdraw_ammount();
    b.display();
}
