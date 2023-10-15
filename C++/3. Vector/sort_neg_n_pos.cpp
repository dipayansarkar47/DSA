#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1,8,0,-5,93,53,-12,9,-32,445};
    int s = 0;
    int m = 0;
    int n = (sizeof(arr) / sizeof(arr[0]));
    int e = n-1;
    int i=0;
    
    while(s<=e){
        if(arr[m]<0){
            swap(arr[s],arr[m]);
            s++;
            m++;
            i++;
        }else if(arr[m]==0){
            m++;
        }
        else{
            swap(arr[e],arr[m]);
            e--;
        }
    }
    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    
    return 0;
}