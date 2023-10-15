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

void lowToUpCase(char name[]){
    int n = getLen(name);
    for(int i=0;i<n;i++){
        name[i] = name[i] - 'a' + 'A';
    }
}

int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name,50);
    lowToUpCase(name);
    cout << "The Upper Cased Array is: " <<  name << endl;
    return 0;
}