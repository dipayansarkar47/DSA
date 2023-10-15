#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(int arr[][4], int row, int col, int target){
    int s = 0;
    int e = row*col - 1;
    int m = s + (e-s)/2;

    while(s<=e){
        int rowIndex = m/col;
        int colIndex = m % col;
        if(arr[rowIndex][colIndex]==target){
            cout << "Found at: arr[" << rowIndex << "][" << colIndex << "]";
            return true;
        }
        if(arr[rowIndex][colIndex]<target){
            s = m + 1;
        }
        else{
            e = m - 1;
        }
        m = s + (e-s)/2;
    }
    return false;

}

int main()
{
    int arr[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int row = 5;
    int col = 4;
    int target = 8;

    bool ans = binarySearch(arr,row,col,target);
    if(!ans){
        cout << "Not Found";
    }
    return 0;
}