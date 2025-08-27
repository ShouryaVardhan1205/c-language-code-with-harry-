#include<stdio.h>
    int main()
    {
        float a = 9.0;
        int b = 2;
        float c = a/b;
        printf("The vale of a/b is %f", a/b); 

        int d = 6.7; // if we use int here insted of float then the value of the initialized variable will demote 
        printf("The value of d is %d ", d);
        return 0; 
    }