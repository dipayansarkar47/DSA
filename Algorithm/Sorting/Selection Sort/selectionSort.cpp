#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5,7,2,3,4};
    int n = arr.size();

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}