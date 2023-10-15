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

bool palindromeCheck(char name[]){
    int i=0;
    int n = getLen(name);
    int j=n-1;

    while(i<=j){
        if(name[i]!=name[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name,50);
    if(palindromeCheck(name)){
        cout << "Palindorme";
    }else{
        cout << "Not Palindrome";
    }
    return 0;
}