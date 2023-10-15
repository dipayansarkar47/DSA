#include <stdio.h>

int main(){
    double a,b,temp;
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    printf("Before swap: a = %.2lf, b = %.2lf\n",a,b);
    temp = a; a=b; b=temp;
    printf("After swap: a = %.2lf, b = %.2lf\n",a,b);
    

    return 0;
}