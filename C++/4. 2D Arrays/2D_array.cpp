#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[3][4] = {{1,2,3,10},{4,5,6,11},{7,8,9,12}};

    // Row-Wise Printing
    cout<<"Row-Wise Printing"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Column-Wise Printing
    cout<<"Column-Wise Printing"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}