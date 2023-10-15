#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMin(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    cout << "Min is: " << min;
    
}

int main(){

    int arr[3][3] = {
        {14,22,13},
        {47,554,69},
        {74,8431,96}
    };
    findMin(arr,3,3);
    
    return 0;
}