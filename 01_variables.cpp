#include <iostream>

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
    float pi = 3.14F; // F is required for float
    // what if we remove F?
    // float pi = 3.14;
    double salary = 100000.00;
    char grade = 'A';
    string name = "Fu Lim";
    bool isStudent = true;

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
    cout << "First Element: " << numbers[0] << endl;

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
