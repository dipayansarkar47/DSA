#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> arr1{3,7,9,1};
    vector<int> arr2{4,8,2};
    vector<int> ans;

    for(int i=0;i<arr1.size();i++){
        ans.push_back(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        ans.push_back(arr2[i]);
    }

    cout<< "Printing the Array: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}