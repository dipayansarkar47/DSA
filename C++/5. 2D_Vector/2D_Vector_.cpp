#include <iostream>
#include <vector>
using namespace std;
int main(){
    int row =5;
    int col =8;

    vector<vector<int> > arr(row, vector<int>(col,-1));

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << arr.size() << endl << arr[0].size();

return 0;
}