#include <iostream>
using namespace std;
class con
{
    int a, m1, m2, m3, total, per, y;

public:
    con()
    {
        cout << "\n Enter the Student :";
        cin >> a;
        cout << "\n Enter the marks sub1 :";
        cin >> m1;
        cout << "\n Enter the marks sub2 :";
        cin >> m2;
        cout << "\n Enter the marks sub3 :";
        cin >> m3;
        total = m1 + m2 + m3;
 0       cout << "\n Total Marks :" << total;
        per = total / 3;
        cout << "\n Percentage are :" << per;
        cout << "\n Grade : ";
        if (per >= 91 && per <= 100)
            cout << "A1";
        else if (per >= 81 && per < 91)
            cout << "A2";
        else if (per >= 71 && per < 81)
            cout << "B1";
        else if (per >= 61 && per < 71)
            cout << "B2";
        else if (per >= 51 && per < 61)
            cout << "C1";
        else if (per >= 41 && per < 51)
            cout << "C2";
        else if (per >= 33 && per < 41)
            cout << "D";
        else if (per >= 21 && per < 33)
            cout << "E1";
        else
            cout << "E2";
    }
    con(int z)
    {
        y = z;
        cout << "\n Enter the Student :";
        cin >> a;
        cout << "\n Enter the marks sub1 :";
        cin >> m1;
        cout << "\n Enter the marks sub2 :";
        cin >> m2;
        cout << "\n Enter the marks sub3 :";
        cin >> m3;
        total = m1 + m2 + m3;
        cout << "\n Total Marks :" << total;
        per = total / 3;
        cout << "\n Percentage are :" << per;
        cout << "\n Grade : ";
        if (per >= 91 && per <= 100)
            cout << "A1";
        else if (per >= 81 && per < 91)
            cout << "A2";
        else if (per >= 71 && per < 81)
            cout << "B1";
        else if (per >= 61 && per < 71)
            cout << "B2";
        else if (per >= 51 && per < 61)
            cout << "C1";
        else if (per >= 41 && per < 51)
            cout << "C2";
        else if (per >= 33 && per < 41)
            cout << "D";
        else if (per >= 21 && per < 33)
            cout << "E1";
        else
            cout << "E2";
    }
};
int main()
{
    int m;
    cout << "\n Enter the no. of students :";
    cin >> m;
    con c1[m];
}