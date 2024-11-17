#include <iostream>

using namespace std;

int main()
{
    // == equal to

    // != not equal to

    // > greater than

    // < less than

    // >= greater than or equal to

    // <= less than or equal to

    // 1. If Statement
    int age = 18;
    bool hasDriverLicense = true;
    if (age >= 18 && hasDriverLicense)
    {
        cout << "You can drive\n";
    }
    else if (age >= 18 && !hasDriverLicense)
    {
        cout << "You can't drive\n";
    }
    else
    {
        cout << "You can't drive\n";
    }

    // 2. Switch Statement
    int year = 4;
    switch (year)
    {
    case 1:
        cout << "Freshman\n";
        break;
    case 2:
        cout << "Sophomore\n";
        break;
    case 3:
        cout << "Junior\n";
        break;
    case 4:
        cout << "Senior\n";
        break;
    default:
        cout << "Invalid\n";
        break;
    }

    // 3. Ternary Operator
    int age = 18;
    string result = (age >= 18) ? "Adult" : "Teenager";
    return 0;

    // 4. While Loop
    string pwd = "";

    while (pwd != "1234")
    {
        cout << "Enter password: ";
        cin >> pwd;
    }

    // 5. Do-While Loop
    string pwd = "";

    do
    {
        cout << "Enter password: ";
        cin >> pwd;
    } while (pwd != "1234");

    // 6. For Loop
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    // 7. Break Statement
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << "\n";
    }

    // 8. Continue Statement
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << "\n";
    }
}
