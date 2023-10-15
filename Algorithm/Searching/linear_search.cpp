// Linear Sesarch Algorithm
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    // 1. Take input from user
    int n,x;
    cout<< "Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<< "Which element you want to search in the array: ";
    cin>>x;
    cout<<"Your given array...\n";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    // 2. Search the element in the array
    int result = linear_search(arr,n,x);
    // 3. Print the result
    (result==-1)? cout<< "\nElement not found in the array":
    cout<< "\nElement found at index: "<<result;

    return 0;
}