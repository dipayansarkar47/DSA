#include <stdio.h>

int main(){
    // int a = 10;
    // int *p = &a; // p is a pointer to a
    // printf("%d\n", *p); // pri0nts 10
    // printf("%d\n", p); // prints address of a

    // printf("%d\n", &p); // prints address of p
    // printf("%d\n", &a); // prints address of a

    // printf("%d\n", *&a); // prints 10
    // printf("%d\n", *&p); // prints 10

    // printf("%p\n", &a); // prints address of a in hexadecimal
    // printf("%p\n", &p); // prints address of p in hexadecimal

    // printf("%u\n", p); // prints address of a in unsigned int
    // printf("%u\n", &p); // prints address of p in unsigned int
    // printf("%u\n", &a); // prints address of a in unsigned int




    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("%d\n", *ptr);

    *ptr += 5;
    printf("The value of X is: %d after *ptr += 5 \n", *ptr);

    (*ptr)++;
    printf("The value of X is: %d after (*ptr)++ \n", *ptr);
    

    return 0;
}