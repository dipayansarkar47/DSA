#include <stdio.h>

int main(){
    char c;
    int lowercase, uppercase;
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase || uppercase) printf("%c is a vowel",c);
    else printf("%c is a constant",c);
     
    return 0;
}