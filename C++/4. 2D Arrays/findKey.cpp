#include <iostream>
#include <vector>
using namespace std;

bool findKey(int arr[][3], int row, int col, int key){
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            if(key == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int key = 7;
    if(findKey(arr,3,3,key)){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}