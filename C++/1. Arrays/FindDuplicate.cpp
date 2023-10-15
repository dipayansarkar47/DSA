#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,7,8,5,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for (int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    for(int i=0;i<=size-1;i++){
        ans = ans^i;
    }

    cout<<ans;
    return 0;
}