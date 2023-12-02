#include <iostream>
using namespace std;

class comp
{
    int a, b;

public:
    comp(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a " << a << " b " << b << endl;
    }
    comp operator+(comp obj)
    {
        comp temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{

    comp c1(20, 10), c2(30, 20), c3(0, 0);
    c3 = c1 + c2;
    c3.show();
    return 0;
}