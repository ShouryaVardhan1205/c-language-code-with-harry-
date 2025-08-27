#include<stdio.h>
   int main()
   {
    int a = 30, b = 4;
    int c = a+b;

    printf("The value of a is %d.\n The value of b is %d.\n And their sum is %d\n", a,b,c);
    
    // Modulus operator is used to get the remainder.
    printf("The remainder when a is divided by b is: %d", a%b);
    return 0;
   }