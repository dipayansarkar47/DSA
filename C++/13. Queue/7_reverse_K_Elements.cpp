#include <iostream>
#include <stack>
#include <queue>
using namespace std;


void reverseK(queue<int> &q, int k){

    // Step 1: Queue -> Stack
    stack<int> s;
    int count = 0;
    int n = q.size();

    if(k<=0 || k>n){
        return;
    }

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k){
            break;
        }
    }

    // Step 2: Stack -> Queue
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // Step 3: Push n-k element from q front to back
    count = 0;
    while(!q.empty() && n-k != 0){
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n-k){
            break;
        }
    }

}

int main()
{

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);

    int k = 3;
    reverseK(q,k);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}