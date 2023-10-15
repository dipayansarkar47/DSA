#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{2,6,7,9,2,3,9,8,4,1,5,2};
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = arr[i] ^ ans;
    }
    cout<<ans;

    return 0;
}