#include <iostream>

class Date
{
private:
    int month;
    int day;
    int year;

public:
    // Member function to get the date from the user
    void getDate()
    {
        std::cout << "Enter date in 12/31/02 format: ";
        char delimiter;
        std::cin >> month >> delimiter >> day >> delimiter >> year;
    }

    // Member function to display the date
    void showDate() const
    {
        std::cout << "Date: " << month << "/" << day << "/" << year << std::endl;
    }
};

int main()
{
    // Create an object of the Date class
    Date myDate;

    // Get and display the date
    myDate.getDate();
    myDate.showDate();

    return 0;
}
