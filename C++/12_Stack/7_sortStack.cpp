#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int first){

    // Base Case
    if(s.empty()){
        s.push(first);
        return;
    }
    if(s.top() >= first){
        s.push(first);
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive Call
    insertSorted(s,first);

    // Backtracking
    s.push(temp);
}

void sortStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive Call
    sortStack(s);

    // Backtracking
    insertSorted(s,temp);
}

int main()
{
    stack<int> s;

    s.push(50);
    s.push(30);
    s.push(40);
    s.push(10);
    s.push(80);
    s.push(60);

    sortStack(s);
    cout << "Printing the sorted stack:" << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}