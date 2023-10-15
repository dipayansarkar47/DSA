#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0,0,1,0,0,1,1,1,1};

    int s = 0;
    int i = 0;
    int e = arr.size()-1;
    
    while(i!=e){
        if(arr[i]==0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }else{
            swap(arr[i],arr[e]);
            e--;
        }
    }

    for(int k=0; k<arr.size(); k++){
        cout << arr[k] << " ";
    }

    
    return 0;
}