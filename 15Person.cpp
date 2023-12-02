#include <iostream>

#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    // Setter functions
    void setName(const string &n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setCountry(const string &c)
    {
        country = c;
    }
    // Getter functions
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }
};

int main()
{
    // Create a person object
    Person person;

    // Set the person's details
    person.setName("Saveli Sujatha");
    person.setAge(25);
    person.setCountry("USA");

    // Get and display the person's details
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}