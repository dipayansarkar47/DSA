#include <iostream>
#include <cstring>
using namespace std;

int getLen(char name[]){
    int len = 0;
    int i = 0;

    while(name[i]!='\0'){
        len++;i++;
    }
    return len;
}

int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name,50);
    cout << "The len of " << name << " is " << getLen(name) << endl;
    cout << "The len of " << name << " is " << strlen(name) << endl;
    return 0;
}