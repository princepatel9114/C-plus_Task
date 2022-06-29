#include <iostream>
using namespace std;
int main()
{
    int i;
    float m, sum = 0, per;
    cout << "Enter Marks obtained in 5 Subjects: ";
    for (i = 0; i < 5; i++)
    {
        cin >> m;
        sum = sum + m;
    }
    per = sum / 5;
    cout << "\nGrade = ";
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
    else if (per >= 0 && per < 21)
        cout << "E2";
    cout << "\nPer = " << per;
    return 0;
}