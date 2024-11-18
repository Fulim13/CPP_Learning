#include <iostream>
#include "Rectangle.h"

using namespace std;

int Rectangle::getArea()
{
    return width * height;
}

void Rectangle::setWidth(int w)
{
    width = w;
}

void Rectangle::setHeight(int h)
{
    height = h;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

int main()
{
    Rectangle r = Rectangle(0, 0);
    r.setWidth(5);
    r.setHeight(10);
    cout << "Area: " << r.getArea() << endl;
    return 0;
}
