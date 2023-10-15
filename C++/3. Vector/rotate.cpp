#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArr(vector<int>& arr, int d){
    if(d == 0){
        return arr;
    }
    for(int i=0; i<d; i++){
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    return arr;

}

int main(){
    vector<int> arr{1,2,3,4,5,6,7};
    int d = 4;
    rotateArr(arr, d);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}