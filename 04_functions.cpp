#include <iostream>

using namespace std;

// 1. Scope of Variables
int x = 5; // Global variable

void scope()
{
    // 1. Local Variables
    int x = 10; // Local variable
    cout << "Local Variable: " << x << endl;

    // 2. Global Variables
    cout << "Global Variable: " << ::x++ << endl;

    // 3. Static Variables
    for (int i = 0; i < 5; i++)
    {
        static int y = 0; // retains its value between function calls
        y++;
        cout << "Static Variable: " << y << endl;
    }
}

// 3. Function Declaration
void print(int x);

int main()
{
    scope();
    cout << "Global Variable: " << x << endl;

    // 3.1 Function Call
    print(5);
    return 0;
}

// 2. Function Overloading
// 2.1 Different number of parameters
void print(int x)
{
    cout << "Integer: " << x << endl;
}

void print(float x)
{
    cout << "Float: " << x << endl;
}

// 2.2 Different data types of parameters
void print(int x, float y)
{
    cout << "Integer: " << x << ", Float: " << y << endl;
}

// 4 Function Declaration in Header file
// ~~~~~~ main.cpp ~~~~~~

#include <iostream>
#include "functions.hpp"

int main()
{

    std::cout << say_hi("Sabaa");
}

// ~~~~~~ functions.hpp ~~~~~~

// function declaration
std::string say_hi(std::string name);

// ~~~~~~ functions.cpp ~~~~~~

#include <string>
#include "functions.hpp"

// function defintion
std::string say_hi(std::string name)
{

    return "Hey there, " + name + "!\n";
}
