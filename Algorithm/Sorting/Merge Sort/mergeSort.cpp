#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s + e)/2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[100];
    while(i <= mid && j <= e){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= e){
        temp[k++] = arr[j++];
    }
    for(int i=s; i<=e; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = (s + e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main()
{
    int arr[7] = {5,6,2,13,8,3,12};
    int n = 7;
    int s = 0;
    int e = n - 1;
    mergeSort(arr,s,e);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}