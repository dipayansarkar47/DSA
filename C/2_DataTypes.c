#include <stdio.h>

int main(){
    // int intType; // intType is a variable of type int
    // float floatType; // floatType is a variable of type float
    // double doubleType; // doubleType is a variable of type double
    // char charType; // charType is a variable of type char

    // //The sizeof() function displays the size of a variable
    // printf("The size of int is %d", sizeof(intType));
    // printf("\nThe size of float is %d", sizeof(floatType));
    // printf("\nThe size of double is %d", sizeof(doubleType));
    // printf("\nThe size of char is %d", sizeof(charType));

    int num = 5;
    float num2 = 5.5;
    double sum;
    sum = num + num2;
    printf("%.2f", sum);
    
    return 0;
    
}