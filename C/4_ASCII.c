#include <stdio.h>

int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c", &a);
    printf("The ASCII value of %c is %d", a,a); // %c = character %d = decimal
    return 0;
}