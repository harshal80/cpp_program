#include <iostream>
// #include<conio.h>
using namespace std;
int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
    // clrscr();

    cout << volume(10) << "\n";
    cout << volume(2.5, 8) << "\n";
    cout << volume(100L, 75, 15) << "\n";

    // getch();

    return 0;
}

int volume(int s)
{
    return (s * s * s);
}

double volume(double r, int h)
{
    return (3.14159 * r * r * h); // Corrected the value of PI
}

long volume(long l, int b, int h)
{
    return (l * b * h);
}
