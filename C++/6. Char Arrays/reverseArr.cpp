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
void reverseArr(char name[]){
    int i=0;
    int n=getLen(name);
    int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;j--;
    }
}


int main()
{
    char name[100];
    cout << "Enter your name: ";
    cin.getline(name,50);
    reverseArr(name);
    cout << "Reversed Array is " << name << endl;
    return 0;
}