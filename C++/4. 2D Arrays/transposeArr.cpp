#include <iostream>

using namespace std;

void printArray(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeArr(int arr[][3], int r, int c, int transposedArr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0; j<c; j++){
            transposedArr[j][i] = arr[i][j];
        }
    }
}

int main(){

    int arr[3][3]={
        {23,45,98},
        {32,76,32},
        {56,91,55}
    };

    int transposedArr[3][3];
    cout << "Array:" << endl;
    printArray(arr,3,3);
    transposeArr(arr,3,3,transposedArr);
    cout << "Transposed Array:" << endl;
    printArray(transposedArr,3,3);

    return 0;
}