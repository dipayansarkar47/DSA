#include <iostream>
using namespace std;


bool search(int arr[],int size, int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            // cout<<"The element 1 found at index no: "<<i;
            return 1;
            break;
        }
        // cout<<"This is iteration number: "<<i<<endl;
    }
    return 0;
}

int main()
{
    int arr[10] = {2,5,21,-5,1,3,65,82,10,8};

    //whether 1 is present in the array or not?
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout << "Enter the key: ";
    cin>>key;
    bool found = search(arr,size,key);
    if (found){
        cout << "key is present in the array";
    }
    else{
        cout << "key is absent";
    }
    
    // cout<<size;
    return 0;
}