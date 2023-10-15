#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

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

    // Check karo Q ko rakhna Safe hai ki nhi
    int i=row;
    int j=col;

    // 1. Check Left Row
    while(j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

    // 2. Check Upper-Left Diagonal
    i=row;
    j=col;

    while(i>=0 && j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }

    // 3. Check Lower-Left Diagonal
    i=row;
    j=col;

    while(i < n && j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }

    // Q Nahi Mili toh return True
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
            // Recursion
            solve(board, col+1, n);
            // Backtracking
            board[row][col] = '-';

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