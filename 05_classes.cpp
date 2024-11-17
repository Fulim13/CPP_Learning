#include <iostream>

using namespace std;

class City
{
public:
    string name;
    int population;
    string country;

    City(string name, int population, string country, bool isCapital)
    {
        this->name = name;
        this->population = population;
        this->country = country;
        this->isCapital = isCapital;
    }

    void printInfo()
    {
        cout << "Name: " << name << "\n";
        cout << "Population: " << population << "\n";
        cout << "Country: " << country << "\n";
    }

private:
    bool isCapital;
};

int main()
{
    City newYork("New York", 8175133, "USA", false);
    newYork.printInfo();

    return 0;
}
