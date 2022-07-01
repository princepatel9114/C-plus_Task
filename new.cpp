#include <iostream>
using namespace std;
class example
{
    int a, b;

public:
    void set_ab(int x, int y)
    {
        a = x;
        b = y;
    }
    void get_ab()
    {
        cout << "\n a : " << a;
        cout << "\n b : " << b;
    }
    example add(example E1, example E2)
    {
        example E_temp;
        E_temp.a = E1.a + E2.a;
        E_temp.b = E1.b + E2.b;
        return E_temp;
    }
};
int main()
{
    example E1, E2, E3;
    E1.set_ab(10, 20);
    E2.set_ab(11, 21);
    E3 = E3.add(E1, E2);
    E3.get_ab();
}