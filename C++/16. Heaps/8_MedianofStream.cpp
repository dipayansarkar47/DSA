#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void callMedian(double &median, priority_queue<int> &maxHeap, priority_queue<int, vector<int>, greater<int> > &minHeap, int element){
    if(maxHeap.empty() || element < maxHeap.top()){
        maxHeap.push(element);
        if(maxHeap.size() - minHeap.size() > 1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            return;
        }
        else{
            median = maxHeap.top();
            return;
        }
    }
    else{
        minHeap.push(element);
        if(minHeap.size() - maxHeap.size() > 1){
            maxHeap.push(minHeap.top());
            minHeap.pop();
            return;
        }
        else{
            median = minHeap.top();
            median = (maxHeap.top() + minHeap.top()) / 2.0;
            return;
        }
    }
}

int main()
{
    int arr[12] = {5,15,1,3,2,8,7,9,10,6,11,4};
    int n = 12;
    double median = 0;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    for(int i=0; i<n; i++){
        int element = arr[i];
        callMedian(median, maxHeap, minHeap, element);
        cout << "-> " << median << endl;
    }cout << endl;

    return 0;
}