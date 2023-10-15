#include <iostream>
#include <stack>
#include <queue>
using namespace std;


void interleave(queue<int> &q){
    // Step 1:
    int n = q.size();
    if(q.empty()) return;
    int k = n/2;
    int count = 0;

    queue<int> q2;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    // Step 2:
    while(!q.empty() && !q2.empty()){
        int first = q2.front();
        q2.pop();

        q.push(first);
        
        int second = q.front();
        q.pop();

        q.push(second);
    }

    // Odd wala case
    if(n&1){
        int element = q.front();
        q.pop();
        q.push(element);
    }

}

int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    interleave(q);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}