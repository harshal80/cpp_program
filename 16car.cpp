#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;

public:
    // Getter functions
    string getCompany()
    {
        return company;
    }
    string getModel()
    {
        return model;
    }
    int getYear()
    {
        return year;
    }
    // Setter functions
    void setCompany(const string &comp)
    {
        company = comp;
    }

    void setModel(const string &mdl)
    {
        model = mdl;
    }

    void setYear(int yr)
    {
        year = yr;
    }
};

int main()
{
    // Create a car object
    Car car;

    // Initialize the object using setter methods
    car.setCompany("AUDI");
    car.setModel("A6");
    car.setYear(2023);

    // Get and display the car details
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    // Set new values for the car using setter methods
    car.setCompany("BMW");
    car.setModel("M4");
    car.setYear(2022);

    // Get and display the updated car details
    cout << "\nUpdated Company: " << car.getCompany() << endl;
    cout << "Updated Model: " << car.getModel() << endl;
    cout << "Updated Year: " << car.getYear() << endl;

    return 0;
}
