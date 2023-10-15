#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3,9,4,9,3};
    int ans=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    cout<<ans;
    return 0;
}