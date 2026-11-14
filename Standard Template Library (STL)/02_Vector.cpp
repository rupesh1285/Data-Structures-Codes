#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialization of Vectors

    vector<int> v1(5,1);
    vector<int> vec;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Size: " << vec.size() << endl;

    vec.push_back(1);
    cout << "Capacity : " << vec.capacity() << endl;
    cout << "Size : " << vec.size() << endl;

    vec.push_back(2);
    cout << "Capacity : " << vec.capacity() << endl;
    cout << "Size : " << vec.size() << endl;

    vec.push_back(3);
    cout << "Capacity : " << vec.capacity() << endl;
    cout << "Size : " << vec.size() << endl;

    cout << "Element at 2nd Index:" << vec.at(2) << endl;

    cout << "Front:" << vec.front() << endl;
    cout << "Back:" << vec.back() << endl;

    cout<<"Vector Before pop:"<< endl;
    for(int i:vec){
      cout<<i<<" ";
    }
    vec.pop_back();
    cout<< endl;
    cout<<"Vector After pop:"<< endl;

    for(int i:vec){
      cout<<i<<" ";
    }
    cout<< endl;
    

    cout<<"Vector size Before Clear:"<<vec.size()<< endl;
    cout<<"Vector capacity Before Clear:"<<vec.capacity()<< endl;

    vec.clear();

    cout<<"Vector size after Clear:"<<vec.size()<< endl;
    cout<<"Vector capacity after Clear:"<<vec.capacity()<< endl;

    

    // Copying a Vector 
    vector<int> v2(v1);
     for(int i:v2){
      cout<<i<<" ";
    }
    cout<< endl;
    
    return 0;
}
