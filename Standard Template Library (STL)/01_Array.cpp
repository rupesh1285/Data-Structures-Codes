#include <iostream>
#include <array>

using namespace std;

int main()
{
    // STL Array Declaration and Initialization

    // Method 1: Using array constructor
    array<int,5> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    // Method 2: Using fill() method
    array<int,5> arr2;
    arr2.fill(10);

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Method 3: Using at() method
    array<int,5> arr3 = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr3.at(i) << " ";
    }
    cout << endl;

    // Method 4: Using front() and back() methods
    array<int,5> arr4 = {1, 2, 3, 4, 5};
    cout << "First element: " << arr4.front() << endl;
    cout << "Last element: " << arr4.back() << endl;

    

   
   return 0;
}
