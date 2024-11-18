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

// Question: WRite a function to slice an array from a given start index to end index. Slicing refers to the process of extracting a subset of an array from one index(start) to another index(end).Given an array and the indexes to slice at, return the sliced array.For example, if arr[] = {15, 7, 13, 20, 9}, start = 1, and end = 3, the expected output is{7, 13, 20}.

#include <iostream>
#include <vector>
using namespace std;

vector<int> sliceArray(const vector<int> &arr, int start, int end)
{
    // Validate indices
    if (start < 0 || end >= arr.size() || start > end)
    {
        return {}; // Return an empty vector for invalid input
    }

    // Use vector's range constructor to slice the array
    return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}

int main()
{
    vector<int> arr = {15, 7, 13, 20, 9};
    int start = 1, end = 3;

    vector<int> sliced = sliceArray(arr, start, end);
    if (sliced.empty())
    {
        cout << "Invalid indices!" << endl;
    }
    else
    {
        for (int num : sliced)
        {
            cout << num << " ";
        }
    }

    return 0;
}
