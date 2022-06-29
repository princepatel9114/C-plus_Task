#include <iostream>
using namespace std;
class home
{
private:
    int p, q;

public:
    void set(int a, int b)
    {
        p = a;
        q = b;
    }
    int sum()
    {
        return p + q;
    }
};
int main()
{
    int a, b;
    home h1;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter a:";
    cin >> b;
    h1.set(a, b);
    cout << h1.sum();
}
