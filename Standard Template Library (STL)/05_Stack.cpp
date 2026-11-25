#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("I");
    s.push("Love");
    s.push("Code");

    cout<<"Printing top element: "<< s.top()<<endl;
    s.pop();
    cout<<"Printing top element: "<< s.top()<<endl;

    cout<<"Size of Stack: "<<s.size()<<endl;
    cout<<"Empty or Not: "<<s.empty()<<endl;

    return 0;
}