#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int first){

    // Base Case
    if(s.empty()){
        s.push(first);
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive Call
    insertAtBottom(s,first);

    // Backtracking
    s.push(temp);
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(15);
    s.push(27);
    s.push(32);
    s.push(11);
    s.push(60);

    if(s.empty()){
        cout << "Stack is empty.." << endl;
        return 0;
    }
    int first = s.top();
    s.pop();
    insertAtBottom(s,first);
    cout << "printing:" << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}