#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMax(int arr[][3], int row, int col){
    int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout << "Max is: " << max;
    
}

int main(){

    int arr[3][3] = {
        {14,22,13},
        {47,554,69},
        {74,8431,96}
    };
    findMax(arr,3,3);
    
    return 0;
}