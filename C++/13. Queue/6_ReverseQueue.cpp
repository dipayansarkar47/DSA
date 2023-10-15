#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQ(queue<int> &q){

    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        s.push(element);
        q.pop();
    }
    while(!s.empty()){
        int element = s.top();
        q.push(element);
        s.pop();
    }

}

void reverseRecursion(queue<int> &q){

    // Base Case
    if(q.empty()){
        return;
    }

    int t = q.front();
    q.pop();

    reverseRecursion(q);

    q.push(t);

}

int main()
{

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);
    q.push(1);

    // reverseQ(q);
    reverseRecursion(q);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}