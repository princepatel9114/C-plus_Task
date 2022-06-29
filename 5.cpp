#include <iostream>
using namespace std;
class home
{
    int i, a[5], m1[5], m2[5], m3[5], total[5], per[5], grade[5];

public: 
    void data()
    {
        for (i = 0; i < 5; i++)
        {

            cout << "\n Enter the s ";
            cin >> a[i];
            cout << "\n Enter the m1 ";
            cin >> m1[i];
            cout << "\n Enter the m2 ";
            cin >> m2[i];
            cout << "\n Enter the m3 ";
            cin >> m3[i];

            total[i] = m1[i] + m2[i] + m3[i];
            cout << "\n Total :" << total[i];
            per[i] = total[i] / 3;
            cout << "\n Percentage :" << per[i];
            cout << "\n Grade : ";
            if (per[i] >= 91 && per[i] <= 100)
                cout << "A1";
            else if (per[i] >= 81 && per[i] < 91)
                cout << "A2";
            else if (per[i] >= 71 && per[i] < 81)
                cout << "B1";
            else if (per[i] >= 61 && per[i] < 71)
                cout << "B2";
            else if (per[i] >= 51 && per[i] < 61)
                cout << "C1";
            else if (per[i] >= 41 && per[i] < 51)
                cout << "C2";
            else if (per[i] >= 33 && per[i] < 41)
                cout << "D";
            else if (per[i] >= 21 && per[i] < 33)
                cout << "E1";
            else if (per[i] >= 0 && per[i] < 21)
                cout << "E2";
        }
    }
};
int main()
{
    home students;
    students.data();
}