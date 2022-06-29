#include <iostream>
using namespace std;
class home
{
private:
    int m;

public:
    int n = 10;
    void set(int a)
    {
        m = a;
    }
    int get()
    {
        return m;
    }
};
int main()
{
    home h1;
    h1.set(100);
    cout << h1.get();
}
