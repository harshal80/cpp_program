#include <iostream>
using namespace std;

int main()
{

    int age = 14;
    try
    {
        if (age >= 18)
        {
            cout << "You can abble to vote " << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "you can not abble to vote ";
    }

    return 0;
}