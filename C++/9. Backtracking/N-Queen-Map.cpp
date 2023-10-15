#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int,bool> rowC; // rowcheck
unordered_map<int,bool> uldC; // Upper Left Diagonal Check
unordered_map<int,bool> bldC; // Bottom Left Diagonal Check

void printSol(vector<vector<char> > &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

bool isSafe(int row, int col, vector<vector<char> > &board, int n){

    if(rowC[row]==true){
        return false;
    }
    if(uldC[n-1+col-row] == true){
        return false;
    }
    if(bldC[row+col] == true){
        return false;
    }
    return true;
}

void solve(vector<vector<char> > &board, int col, int n){
    //base case
    if(col >= n){
        printSol(board, n);
        return;
    }

    //1 case solve karlo, baaki recursion samhal lega
    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            //Rakh Do
            board[row][col] = 'Q';
            // Map wala code
            rowC[row] = true;
            uldC[n-1+col-row] = true;
            bldC[row+col] = true;
            // Recursion
            solve(board, col+1, n);
            // Backtracking
            board[row][col] = '-';
            // Map wala backtracking code
            rowC[row] = false;
            uldC[n-1+col-row] = false;
            bldC[row+col] = false;
        }
    }
}

int main()
{
    int n = 4;
    int col = 0; 
    vector<vector<char> > board(n, vector<char>(n,'-'));
    solve(board, col, n);

    return 0;
}