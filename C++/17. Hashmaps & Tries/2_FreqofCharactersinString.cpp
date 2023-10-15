// Write C++ code to find the number of each characters in a string using unordered map

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin,str);

    unordered_map<char, int> freq;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch != ' '){
            freq[ch]++;
        }
    }
    for(auto i: freq){
        cout << i.first << " --> " << i.second << endl;
    }
    return 0;
}