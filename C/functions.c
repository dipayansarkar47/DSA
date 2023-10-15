#include <stdio.h>

int calsum (int x, int y, int z);

int main(){
    int a, b, c, sum;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = calsum(a, b, c);
    printf("The sum of the numbers is %d\n", sum);
    return 0;
}

int calsum (int a, int y, int z){
    int d;
    d = a + y + z;
    return d;
}



// int main(){
//     int i = 10, j = 20;
//     printf("%d %d %d\n",i,j);
//     printf("%d\n",i,j);
//     return 0;
// }