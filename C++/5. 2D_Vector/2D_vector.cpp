#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int> > arr;

    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {5,6,7,2,3};
    vector<int> arr3 = {19,13};

    arr.push_back(arr1);
    arr.push_back(arr2);
    arr.push_back(arr3);

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}