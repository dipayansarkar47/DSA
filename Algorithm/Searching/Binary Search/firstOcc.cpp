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

int main()
{
    vector<int> arr{1,2,3,4,4,4,4,4,7,8};
    int target = 4;
    int indexOffirstOcc = firstOcc(arr, target) ;
    if(indexOffirstOcc == -1){
        cout << "Target not found" << endl;
    }else{
        cout << "First occurance of " << target <<" is at index " << indexOffirstOcc;
    }

    return 0;
}