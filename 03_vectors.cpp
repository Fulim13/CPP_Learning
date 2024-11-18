#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Difference between arrays and vectors:
    // 1. Arrays have fixed size, vectors can grow in size
    // 2. Arrays are not objects, vectors are objects
    // 3. Arrays are not passed by value, vectors are passed by value

    // 1. Create a vector
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2(5, 0); // 5 elements with value 0

    // 2. Accessing elements
    cout << "First Element: " << v[0] << "\n";

    // 3. Modifying elements
    v[0] = 6;
    cout << "First Element After Modifying: " << v[0] << "\n";

    // 4. Add elements to the end
    v.push_back(6);
    cout << "Whole Vector After Adding: ";
    for (int i : v)
    {
        cout << i << " ";
    }

    // 5. Remove elements from the end
    v.pop_back();
    cout << "Whole Vector After Removing: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // 6. Replace elements
    v.insert(v.begin() + 2, 7);
    cout << "Whole Vector After Replace: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // 7. Remove elements
    v.erase(v.begin() + 3);
    cout << "Whole Vector After Removing: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // 8. Clear the vector
    v.clear();
    cout << "Whole Vector After Modifying: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // 9. Size of vector
    cout << "Size: " << v.size() << "\n";

    return 0;
}
