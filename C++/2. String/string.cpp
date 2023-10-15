#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "hello";
    cout << s << endl;
    cout << s.length() << endl;
    cout << s.substr(0,2) << endl;
    s.push_back('A');
    s.pop_back();
    cout << s << endl;
    return 0;
}