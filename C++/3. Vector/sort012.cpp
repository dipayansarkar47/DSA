#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,2,1,2,0,1};
    int s = 0;
    int m = 0;
    int e = (sizeof(arr) / sizeof(arr[0])) - 1;
    int i=0;
    
    while(m<=e){
        if(arr[m] == 0){
            swap(arr[m],arr[s]);
            s++;
            m++;
        }else if(arr[m]==1){
            m++;

        }else{
            swap(arr[e],arr[m]);
            e--;
        }
    }

    for(int j=0; j<6; j++){
        cout << arr[j] << " ";
    }
    
    return 0;
}