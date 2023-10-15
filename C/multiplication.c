#include <stdio.h>

int main(){
    double a,b,mul;
    short n;
    short unsigned j;
    printf("Enter the values of a and b: ");
    scanf("%lf %lf", &a,&b);
    mul = a*b;
    printf("The result is: %.2lf * %.2lf = %.2lf", a,b,mul);
    return 0;
}