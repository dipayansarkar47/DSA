#include <iostream>
using namespace std;

    void solve(string str, int i){
        
        //base case
        if(i >= str.length()){
            cout << str << " ";
            return;
        }

        // swapping
        for(int j=i; j<str.length(); j++){
            // processing
            swap(str[i],str[j]);
            // recursve call
            solve(str, i+1);
            // backtracking
            swap(str[i],str[j]);
        }
    }

int main()
{
    string str = "abc";
    int i=0;
    solve(str,i);
    return 0;
}