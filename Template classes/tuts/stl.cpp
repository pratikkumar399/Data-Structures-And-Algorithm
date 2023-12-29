// ॐ नमः शिवाय
#include <iostream>
#include <array>
using namespace std;

/* जय भवानी । हर हर महादेव। */
int main()
{

    // normal way of array declaration
    int arr1[5] = {1, 2, 3, 4, 5};

    array<int, 10> arr{1, 2, 3, 4, 6};
    // arr.fill(10);

    // print the array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    // cout << arr.at(4) << endl;
    // cout << arr.front() << endl;
    // cout << arr.back() << endl;
    // cout << arr.size() << endl;
    // cout << arr.max_size() << endl;
    return 0;
}

// stl ->standard template library

// types of stl
// 1. container classes ->  container classes are used to hold objects of same type
// 2. iterator classes -> iterator classes are used to iterate over the container classes
// 3. algorithm classes -> algorithm classes are used to perform operations on container classes
// 4. function objects -> function objects are used to perform operations on container classes