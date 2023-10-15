#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr(5);

    cout << "Enter the elements: ";
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }

    cout<< "Printing the Array: ";
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}