#include <iostream>
#include <queue>
using namespace std;

// int kthGreatestElement(int arr[], int n, int k){
//     priority_queue<int,vector<int>, greater<int> > pq;

//     for(int i=0; i<k; i++){
//         pq.push(arr[i]);
//     }
//     for(int i=k; i<n; i++){
//         int element = arr[i];
//         if(element > pq.top()){
//             pq.pop();
//             pq.push(element);
//         }
//     }
//     int ans = pq.top();
//     return ans;
// }
int kthSmallestElement(int arr[], int n, int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int i=k; i<n; i++){
        int element = arr[i];
        if(element < pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}

int main()
{
    int arr[] = {10, 5, 20, 4, 15};
    int n = 5;
    int k = 2;
    int ans = kthSmallestElement(arr, n, k);
    cout << "Smallest element is: " << ans << endl;
    // int ans1 = kthGreatestElement(arr, n, k);
    // cout << "Greatest element is: " << ans1 << endl;
    return 0;
}