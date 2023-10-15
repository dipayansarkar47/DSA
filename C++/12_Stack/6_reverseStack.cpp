#include <iostream>
#include <stack>
using namespace std;

void reverse(stack<int> &s, int first){

    // Base Case
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive Call
    reverse(s,first);

    // Backtracking
    s.push(temp);
}

int main()
{
    stack<int> s;

    s.push(88);
    s.push(15);
    s.push(27);
    s.push(32);
    s.push(11);
    s.push(60);

    
    int first = s.top();
    reverse(s,first);
    cout << "Printing the reversed stack:" << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}