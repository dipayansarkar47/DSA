#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    cout<<"Printing the array\n";
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}
void swapAlt(int arr[],int size){

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr,size);
}


void takeInput(int n){
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    swapAlt(arr,n);
    
}

int main()
{
    int n;
    cout<<"What's the size of array: ";
    cin>>n;
    takeInput(n);
    return 0;
}