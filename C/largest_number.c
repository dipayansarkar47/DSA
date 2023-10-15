#include <stdio.h>

int main(){
    double a,b,c;
    printf("Enter the values of a,b,c: ");
    scanf("%lf %lf %lf", &a,&b,&c);

    if (a>b && a>c) printf(" a = %.2lf is largest", a);
    else if (b>a && b>c) printf("b = %.2lf is largest",b);
    else printf("c = %.2lf is largest",c);
    return 0;
}