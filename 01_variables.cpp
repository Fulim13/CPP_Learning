#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // This is single line comment: CTRL + /
    /* This is multi-line comment: ALT + SHIFT + A */

    // 1. User Input
    int tip;
    cout << "Enter tip amount: ";
    // cin >> tip;
    // cout << "Tip amount: " << tip << endl;

    // 1.5 Naming Conventions
    // Camel Case: tipAmount
    // Pascal Case: TipAmount
    // Snake Case: tip_amount

    // 2. Variables (int, float, double, char, string, bool)
    int year = 2002;
    long population = 1000000000L; // whole numbers are by default int
    float pi = 3.14F;              // floating point number are by default double
    double salary = 100000.00;
    char grade = 'A';
    string name = "Fu Lim";
    bool isStudent = true;
    auto x_auto = 5; // auto infers the type

    // 2.1 Number Systems
    int decimal = 10;
    int octal = 0b10; // 8
    int hex = 0x10;   // 16

    // 2.2 Data types size and limits
    int bytes = sizeof(int);
    int min = numeric_limits<int>::min();
    int max = numeric_limits<int>::min();
    cout << "Bytes: " << bytes << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    // 2.5 Constants
    const int BIRTH_YEAR = 2002;
    // BIRTH_YEAR = 2003; // Error

    // 3. Arithmetic Operations
    int x = 0;

    x = 4 + 2; // x is now 6
    x = 4 - 2; // x is now 2
    x = 4 * 2; // x is now 8
    x = 4 / 2; // x is now 2
    x = 4 % 2; // x is now 0

    // 4. Arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << numbers[0];

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;

    // 5. Explicit Casting
    double a = 5.5;
    int b = (int)a; // 5

    // 5.1 Implicit Casting
    int c = 5;
    double d = c; // 5.0

    // 5.2 C++ Style Casting
    int c = static_cast<int>(5.5);
}
