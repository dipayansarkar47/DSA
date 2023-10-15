#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[3][4] = {
        {1,2,3,10},
        {4,5,6,11},
        {7,8,9,12}
    };
    int ans = 0;
    // Row-Wise Printing
    cout<<"Printing sum row-wise"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            ans = ans + arr[i][j];
        }
        cout << ans << endl;
    }

    // Col-Wise Printing
    cout<<"Printing sum col-wise"<<endl;
    int sum = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }


    return 0;
}