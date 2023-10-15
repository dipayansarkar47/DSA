#include <iostream>
using namespace std;

int findPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;

}
int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int result = findPivot(arr,7);
    cout<<"Pivot is "<< arr[result] << " at index: " << result;
    return 0;
}