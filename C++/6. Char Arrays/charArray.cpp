#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name,50);
    cout << name << endl;
    return 0;
}