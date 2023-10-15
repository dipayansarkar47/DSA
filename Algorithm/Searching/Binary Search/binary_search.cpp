#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int target){
        int m = s + (e-s)/2;
    
        while(s<=e){
            if(arr[m] == target){
                return m;
            }
            if(arr[m] < target){
                s = m + 1;
            }
            else{
                e = m - 1;
            }
            m = s + (e-s)/2;
        }
        return -1;
    }
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    int indexOfTarget = binarySearch(arr, 0, 5, 5);
    if(indexOfTarget == -1){
        cout << "Target not found" << endl;
    }else{
        cout << "target found at index " << indexOfTarget;
    }

    return 0;
}
