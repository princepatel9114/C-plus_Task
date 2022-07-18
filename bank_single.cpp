#include <iostream>
using namespace std;
class bank
{
protected:
    int Acno,balance, SVdeposite, SVwithdraw, SVshowbalance;

public:
    void Set_Acno(int num)
    {
        Acno = num;
    }
    int get_Acno()
    {
        return Acno;
    }
};
class SavingAc : public bank
{
public:
    void SvAcno()
    {
        cout << "\n Saving Account number" << Acno;
    }
    void Svdeposite(int amt)
    {
        balance += amt;
    }
    void Svwithdraw(int amt)
    {
        balance -= amt;
    }
    int Svbalance()
    {
        return balance;
    }
};
class currentac : public bank
{
    public:
    void CtAcno()
    {
        cout<<"\n Current Account number"<< Acno;
    }
    void CtDeposit(int amt)
    {
        balance+=amt;
    }
    void CtWithdraw(int amt)
    {
        balance-=amt;
    }
    int Ctbalance()
    {
        return balance;
    }
};
int main()
{
    int n1,m;
    do{cout<<"Enter your choice : \n1. Saving \n2. Current \nOption:";
    cin>>n1;
    if(n1 == 1)
    {
        SavingAc a;
        a.Set_Acno(5002000);
        a.SvAcno();
        int i, n, d, w, sb = 2500;
        do
        {
            cout << "\nYour Current Balance is " << sb << "\n";
            cout << "\nEnter the option from the following : \n1-Deposit\n2-Withdraw \n9-Show_balance \n0-Exit \n Option : ";
            cin >> n;
        if (n == 0)
        {
            cout << "\n Exit";
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
    }while (n <= 50);
    }
    else
    {
        currentac b;
        b.Set_Acno(5002000);
        b.CtAcno();
        int i1, n1, d1, w1, sb1 = 2500;
        do
        {
            cout << "\nYour Current Balance is " << sb1 << "\n";
            cout << "\nEnter the option from the following : \n1-Deposit\n2-Withdraw \n9-Show_balance \n0-Exit \n Option : ";
            cin >> n1;
            if (n1 == 0)
            {
                cout << "\n Exit";
                break;
            }
            switch (n1)
            {
            case 1:
            cout << "\n Enter deposit amount :";
            cin >> d1;
            sb1 += d1;
            break;
            case 2:
            cout << "\n Enter Withdraw amount : ";
            cin >> w1;
            sb1 -= w1;
            break;
            case 9:
            cout << "\n Your Revised balance is  " << sb1;
            break;
            default:
            cout << "\n Wrong Choice ";
            break;
        }
    } while (n1 <= 50);
    }
    }while (m<=50);
}