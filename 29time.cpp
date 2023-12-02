#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize data to 0
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    // Constructor to initialize data to fixed values
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Member function to display the time in 11:59:59 format
    void displayTime() const
    {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main()
{
    // Create objects of the Time class
    Time defaultTime;           // Initializes to 0
    Time fixedTime(11, 59, 59); // Initializes to fixed values

    // Display the times
    cout << "Default Time: ";
    defaultTime.displayTime();

    cout << "Fixed Time: ";
    fixedTime.displayTime();

    return 0;
}
