#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;  // cin doesn't take inputs like space, tab, newline
    cout << "The numbers are " << n << " and " << m << endl;

    int a = cin.get();  // cin.get() takes inputs like space, tab, newline
    cout << "The character is " << a << endl;
}