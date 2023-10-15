#include <iostream>
#include <climits>
using namespace std;

int Max(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int Min(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    int arr[100];
    cout << "Enter the size of the array: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Maximum value of the array is: " << Max(arr,size) << endl;
    cout << "Minimum value of the array is: " << Min(arr,size) << endl;
    return 0;
}