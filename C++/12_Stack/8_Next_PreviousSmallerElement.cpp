#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i=0; i<input.size(); i++){
        while(s.top() >= input[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(input[i]);
    }
    return ans;
}
vector<int> nextSmaller(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());
    for(int i=input.size()-1; i>=0; i--){
        while(s.top() >= input[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(input[i]);
    }
    return ans;
}

int main()
{
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans1 = nextSmaller(input);

    cout << "Printing 1...." << endl;
    for(int i=0; i<input.size(); i++){
        cout << ans1[i] << " ";
    }
    cout<<endl;

    vector<int> ans2 = prevSmaller(input);

    cout << "Printing 2...." << endl;
    for(int i=0; i<input.size(); i++){
        cout << ans2[i] << " ";
    }


    return 0;
}