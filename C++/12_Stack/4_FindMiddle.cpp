#include <iostream>
#include <stack>
using namespace std;

int findMin(stack<int> &s, int &totalSize){
    // Base Case
    if(s.empty()) cout << "Stack is empty...";

    if(totalSize/2 + 1 == s.size()){
        cout << "Middle element: " << s.top() << endl;
        return -1;
    }

    int temp = s.top();
    s.pop();

    // Recursive call
    findMin(s,totalSize);

    // Backtracking
    s.push(temp);
    return -1;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    
    int totalSize = s.size();
    findMin(s,totalSize);

return 0;
}