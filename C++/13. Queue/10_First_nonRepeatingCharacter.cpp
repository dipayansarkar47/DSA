#include <iostream>
#include <queue>
using namespace std;

string solve(string str){
    string ans = "";
    queue<char> q;
    int freq[26] = {0};

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty())
        {
            if(freq[q.front() - 'a'] > 1){
                q.pop();
            }else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main(){
    string str = "zarcaazrd";
    string ans = solve(str);
    cout << ans;
    return 0;
}