#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    // Max Heap
    // priority_queue<int> maxHeap;
    // maxHeap.push(3);
    // maxHeap.push(6);
    // maxHeap.push(9);
    // maxHeap.push(2);
    // maxHeap.push(4);
    // cout << "Top element: " << maxHeap.top() << endl;
    // maxHeap.pop();
    // cout << "Top element: " << maxHeap.top() << endl;
    // maxHeap.pop();
    // cout << "Size of MaxHeap is: " << maxHeap.size() << endl;
    // maxHeap.empty() ? cout<< "Maxheap is empty" : cout << "Maxheap is not empty";


    // Min Heap
    priority_queue<int,vector<int>,greater<int> > minHeap;
    minHeap.push(3);
    minHeap.push(6);
    minHeap.push(9);
    minHeap.push(2);
    minHeap.push(4);
    cout << "Top element: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Top element: " << minHeap.top() << endl;
    minHeap.pop();
    cout << "Size of minHeap is: " << minHeap.size() << endl;
    minHeap.empty() ? cout<< "minheap is empty" : cout << "minheap is not empty";

    return 0;
}