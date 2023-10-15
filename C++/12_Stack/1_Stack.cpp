#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // Creation
    stack<int> s;

    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Pop
    s.pop();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}