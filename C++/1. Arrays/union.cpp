#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr1 = {1,3,3,4,6,8};
    vector<int> arr2 = {3,4,9,10};
    vector<int> ans;


    for(int i=0; i<arr2.size(); i++){
        for(int j=0; j<arr1.size(); j++){
            if(arr2[i]==arr1[j]){
                ans.push_back(arr1[j]);
                arr2[i]=INT_MIN;
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i];
    }
    return 0;
}