#include <iostream>
using namespace std;
int main(){

    // Write Fibonacci Code
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element no. " << i << " : ";
        cin >> arr[i];
    }
    int target = 0;
    cout << "Enter the target: ";
    cin >> target;
    int indexOfTarget = binarySearch(arr, n, target);
    if(indexOfTarget == -1){
        cout << "Target not found" << endl;
    }else{
        cout << "target found at index " << indexOfTarget;
    }


    return 0;
}