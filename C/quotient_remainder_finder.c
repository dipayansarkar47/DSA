#include <stdio.h>

int main(){
    int a,b,q,r;
    printf("Enter the value of a and b: "); scanf("%d %d", &a,&b);
    q = a/b; r = a%b;
    printf("The quotient is: %d and remainder is: %d", q,r);
    return 0;
}