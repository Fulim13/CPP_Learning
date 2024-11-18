#include <iostream>

using namespace std;

// 1. Dereference
void dereference()
{
    // integer named x is set to 4
    int x = 4;

    // integer pointer named pX is set to the address of x
    int *pX = &x;

    cout << "Memory address: " << &x << "\n";

    // integer named y is set to the thing pointed to by pX
    int y = *pX;

    cout << y;
}

// 2. Pass-By-Reference
void swap_num(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void pass_by_reference()
{
    int a = 1;
    int b = 2;

    // swap_num(a, b);
    swap_num(&a, &b);

    cout << "A is " << a << "\n";
    cout << "B is " << b << "\n";
}

// 2. Pass-By-Reference (Another Variation - Reference)
// void swap_num(int &i, int &j)
// {
//     int temp = i;
//     i = j;
//     j = temp;
// }

// void pass_by_reference()
// {
//     int a = 1;
//     int b = 2;

//     // swap_num(a, b);
//     swap_num(a, b);

//     cout << "A is " << a << "\n";
//     cout << "B is " << b << "\n";
// }

// 3. Reference
void reference()
{
    cout << "Without Reference\n";
    int a = 42;
    int b = a;
    a = 30;
    cout << "A is " << a << "\n";
    cout << "B is " << b << "\n";

    cout << "With Reference\n";
    int x = 42;
    // y is point at exact memory address as x
    int &y = x;
    y = 30;
    cout << "X is " << x << "\n";
    cout << "Y is " << y << "\n";
}

int main()
{
    dereference();
    // pass_by_reference();
    // reference();
    return 0;
}

// Here, if ptr points to the first element in the above example then ptr + 3 will point to the fourth element. For example,

int *ptr;
int arr[5];
ptr = arr;

ptr + 1 is equivalent to &arr[1];
ptr + 2 is equivalent to &arr[2];
ptr + 3 is equivalent to &arr[3];
ptr + 4 is equivalent to &arr[4];
// Similarly, we can access the elements using the single pointer.For example,

// use dereference operator
*ptr == arr[0];
*(ptr + 1) is equivalent to arr[1];
*(ptr + 2) is equivalent to arr[2];
*(ptr + 3) is equivalent to arr[3];
*(ptr + 4) is equivalent to arr[4];

// Suppose if we have initialized ptr = &arr[2]; then
ptr - 2 is equivalent to &arr[0];
ptr - 1 is equivalent to &arr[1];
ptr + 1 is equivalent to &arr[3];
ptr + 2 is equivalent to &arr[4];
