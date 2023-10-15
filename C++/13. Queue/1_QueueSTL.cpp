#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // Creation
    queue<int> q;

    // Insertion
    q.push(10);
    q.push(25);
    q.push(40);
    q.push(65);

    // size
    cout << "Size of q is: " << q.size() << endl;

    // removal
    q.pop();

    // is empty?
    q.empty() ? cout << "q is Empty.." : cout << "q is Not Empty..";

    cout << endl;

    cout << "Front element is: " << q.front() << endl;

    return 0;
}