#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class cycle
{
private:
    string name;
    int mobile;

public:
    int bal;
    void user()
    {
        string x;
        int y;
        name = x;
        mobile = y;
        cout << "Enter your name :" << endl;
        // getline(cin, name);
        cin>>x;
        cout << "Enter your Mobile No. :" << endl;
        cin >> mobile;
    }
    int deposit()
    {
        cout << "Enter the amount of deposit :";
        cin >> bal;
        if (bal > 300)
        {
            cout << "You can further proceed in app" << endl;
        }
        else
        {
            cout << "Sorry!!! you cant proceed on app" << endl;
            user();
        }
    }
    void charges()
    {
        int minc;
        double min, charge, maxc;
        cout << "Enter the minutes you used :";
        cin >> min;
        if (min > 10 && min < 240)
        {
            charge = min / 10;
            cout << "You are charged by the amount is  " << ceil(charge) << endl;
            minc= bal - charge;
            cout << "Current balance is " <<minc<< endl;
        }
        else
        {
            cout << "you balance is deducted by 300";
            maxc = bal - 300;
            cout << "Current balance is " << bal;
        }
    }
};
int main()
{
    cycle c1;
    int n;
    do
    {
    cout<<"Enter the choice from the following : \n1.User \n2.Deposit \n3.Charges \n0.exit \nOption:";
    cin>>n;
    if(n == 0)
    {
        cout<<"Exit!!!";
        break;
    }
    switch (n)
    {
    case 1:
        c1.user();
        c1.deposit();
        c1.charges();
        break;
    case 2:
        c1.deposit();
        c1.charges();
        break;
    case 3:
        c1.charges();
        break;
    default:
        break;
    }
    }while(n<=50);


}