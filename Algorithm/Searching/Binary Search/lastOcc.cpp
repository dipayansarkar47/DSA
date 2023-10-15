#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        int element = arr[m];
        if(element == target){
            ans = m;
            //Searching for first index to the left
            s = m + 1;
        }else if(element < target){
            e = m - 1;
        }else{
            s = m + 1;
        }
        m = s + (e-s)/2;
    }

    return ans;
}

int main()
{
    vector<int> arr{1,2,3,4,4,4,4,4,7,8};
    int target = 4;
    int indexOflastOcc = lastOcc(arr, target);
    if(indexOflastOcc == -1){
        cout << "Target not found" << endl;
    }else{
        cout << "Last occurance of " << target <<" is at index " << indexOflastOcc;
    }

    return 0;
}