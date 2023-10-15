#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
   int n1,n2,result;

   printf("Enter two numbers: ");
   scanf("%d %d", &n1, &n2);

   result = sum(n1,n2);
   printf("Sum of %d and %d is %d\n", n1, n2, result);
   
   return 0;
}
