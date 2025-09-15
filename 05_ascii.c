/*Write a program to determine whether a character entered by the user is
lowercase or not*/
#include<stdio.h>
    int main()
    {
     char ch;
     printf("Enter character:\n");
     scanf("%c", &ch);
     printf("The character enterd is %c.\n", ch);
     printf("The ascii value of the entered character is %d.\n");
     if(ch>=97 && ch<=122)
     {
        printf("The character entered is a lowercase character.\n");
     }
     else 
     {
        printf("The character entered is not a lowercase character.\n");
     }

        return 0;
    }