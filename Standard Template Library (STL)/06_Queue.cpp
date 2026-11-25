#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("I");
    q.push("Love");
    q.push("Code");

    cout<<"First Element: "<<q.front()<<endl;
    cout<<"Last Element: "<<q.back()<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;

    q.pop();

    cout<<"First Element: "<<q.front()<<endl;
    cout<<"Last Element: "<<q.back()<<endl;
    
    return 0;
}