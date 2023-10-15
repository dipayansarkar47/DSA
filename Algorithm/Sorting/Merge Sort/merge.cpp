#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // assume to create arrays for len1, len2 length
    int* left = new int[len1];
    int* right = new int[len2];

    // copy values
    int k = s;
    // start--->len1
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    // mid+1--->end
    for(int i=0; i<len2; i++){
        right[i] = arr[k];
        k++;
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