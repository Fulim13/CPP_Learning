int main()
{

    int var;

    // Error: conflicting declaration
    double var;
}

// =================================================================

int main()
{

    int var;

    // separate local scope
    {
        double var;
    }

    return 0;
}

// Create a namespace
namespace dbl
{
    double var;
}

// use the namespace
int main()
{
    dbl::var = 10.0;
    return 0;
}

// Multiple and Nested Namespaces

#include <iostream>
using namespace std;

namespace one
{

    void display()
    {
        cout << "namespace one" << endl;
    }

    // create another namespace inside namespace one
    namespace one_one
    {
        void display()
        {
            cout << "namespace one_one" << endl;
        }
    }
}

namespace two
{
    void display()
    {
        cout << "namespace two" << endl;
    }
}

void display()
{
    cout << "not a namespace" << endl;
}

int main()
{

    // call the display() function of namespace one
    one::display();

    // call the display() function of namespace one_one
    one::one_one::display();

    // call the display() function of namespace two
    two::display();

    // call the display() function outside the namespaces
    display();

    return 0;
}

// =================================================================
// Using
#include <iostream>
using namespace std;

namespace one
{

    void display()
    {
        cout << "namespace one" << endl;
    }
}

namespace two
{

    void display()
    {
        cout << "namespace two" << endl;
    }
}

int main()
{

    using namespace one;

    // call one::display()
    display();

    // call two:: display
    two::display();

    return 0;
}

// Naming Conflicts With The Using Directive

using namespace one;

namespace one
{
    void display() { ... }
}

void display() { ... }

int main()
{

    // Error: more than one instance of display()
    display();

    return 0;
}
