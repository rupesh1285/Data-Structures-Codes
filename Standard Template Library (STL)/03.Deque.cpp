#include <iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> dec;

    dec.push_back(1);
    dec.push_front(2);

    for(int i: dec){
        cout << i << " ";
    }
    cout << endl;

    // dec.pop_back(); -> Output: 2 
    // dec.pop_front(): -> Output: 1

    cout<< "Front element:" << dec.front()<< endl;
    cout<< "Back element:" << dec.back()<< endl;

    cout<<"Is the deque Empty:"<< dec.empty()<< endl; // 0-> False, means deque is not empty

    cout << "Size Before Erase:"<< dec.size()<<endl;
    dec.erase(dec.begin(), dec.begin()+1);
    cout << "Size After Erase:"<< dec.size()<<endl;


    return 0;

}