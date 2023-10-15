#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e-s)/2;
    
    while(s<=e){
        if(m+1 < arr.size() && arr[m] > arr[m+1]){
            return m;
        }
        else if(m-1 >= 0 && arr[m - 1] > arr[m]){
            return m - 1;
        }
        else if(arr[s]>= arr[m]){
            e = m - 1;
        }
        else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
    return -1;
}

// #Write a fibonacci function
 
 

int main(){

    // 852. Peak Index in a Mountain Array

    vector<int> arr{66,122,2,3,4,5,457,1,2};
    int ans = findPeak(arr);
    cout << "Peak element is: " << arr[ans];
    return 0;
}