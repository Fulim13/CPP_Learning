#include <iostream>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;

    // member function to display information about the person
    void display_info()
    {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Person p1;

    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // display information using member function
    cout << "\nDisplaying Information." << endl;
    p1.display_info();

    return 0;
}

// STructure Function
#include <iostream>
#include <string>
using namespace std;

// define structure
struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

// declare functions
Person get_data();
void display_data(const Person &);

int main()
{

    Person p = get_data();
    display_data(p);

    return 0;
}

// define function to return structure variable
Person get_data()
{

    Person p;

    string first_name;
    string last_name;
    int age;
    float salary;

    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter salary: ";
    cin >> salary;

    // return structure variable
    return Person{first_name, last_name, age, salary};
}

// define function to take
// structure variable as an argument
void display_data(const Person &p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p.first_name << endl;
    cout << "Last Name: " << p.last_name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

// Structure Pointer
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inch;

    void print_distance()
    {
        cout << "Displaying Information." << endl;
        cout << "Distance = " << feet << " feet " << inch << " inches";
    }
};

int main()
{
    Distance d;

    Distance *ptr = &d;

    cout << "Enter feet: ";
    cin >> ptr->feet; // or (*ptr).feet;
    cout << "Enter inch: ";
    cin >> ptr->inch; // or (*ptr).inch;

    ptr->print_distance(); // or (*ptr).print_distance();

    return 0;
}
