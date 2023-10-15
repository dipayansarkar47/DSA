#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    if(s>e){
        return -1;
    }
    int m = s+(e-s)/2;
    if(arr[m] == key){
        return m;
    }
    if(arr[m] < key){
        return binarySearch(arr, m+1, e, key);
    }
    else{
        return binarySearch(arr, s, m-1, key);
    }
}
int main()
{
    vector<int> arr{10,20,30,40,80,90,99};
    int n = arr.size();
    int target = 99;
    int s =0;
    int e = n-1;
    int ans = binarySearch(arr,s,e,target);
    cout << ans;

    return 0;
}