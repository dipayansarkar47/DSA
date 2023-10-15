#include <iostream>

int main(){

    int a = 10;
    float b = 10.5;
    char c = 'a';
    bool d = true;
    double e = 10.5;

    std::cout << "The sizes of the datatypes are:\n";
    std::cout << "int: " << sizeof(a) << " bytes\n";
    std::cout << "float: " << sizeof(b) << " bytes\n";
    std::cout << "char: " << sizeof(c) << " bytes\n";
    std::cout << "bool: " << sizeof(d) << " bytes\n";
    std::cout << "double: " << sizeof(e) << " bytes\n";
    
}