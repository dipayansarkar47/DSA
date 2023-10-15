#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    char ch = 'a';
    int x = 18;

    int* x = x;

    int* ptr = &a;
    char* p = &ch;
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl << endl;
    cout << "Address: " << p << endl;
    cout << "Value: " << *p << endl;
    return 0;
}   