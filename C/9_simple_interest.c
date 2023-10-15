#include <stdio.h>

int main(){
    int p,n;
    float r,si,sum;
    printf("Enter the value of p,n,r: ");
    scanf("%d %d %f",&p,&n,&r);
    si = (p*n*r)/100;
    printf("The simple interest is %f",si);
    sum = p+si;
    printf("\nThe total amount is %f",sum);
    return 0;
    
}