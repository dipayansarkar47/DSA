#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,3,5,7,9};
    cout << "Enter the elements: ";
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    for(int i=0;i<5;i++){
        cout << 2*arr[i] << " ";
    }
    

}