#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) {
    if(arr[mid] == target) {
      //ans store
      ans = mid;
      //left search
      e = mid - 1;
    }
    else if(target < arr[mid] ) {
      //left me search
      e = mid - 1;
    }
    else if(target > arr[mid] ) {
      //right search
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
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

    int totalOcc = lastOcc(arr, target) - firstOcc(arr, target) + 1;
    
    cout << "First occurance of " << target <<" is at index " << firstOcc(arr, target) << endl;
    cout << "Last occurance of " << target <<" is at index " << lastOcc(arr, target) << endl;
    cout << "Total occurance of " << target <<" is " << totalOcc;
    

    return 0;
}