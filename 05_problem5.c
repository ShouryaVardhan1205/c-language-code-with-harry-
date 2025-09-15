/*Write a program to determine whether a character entered by the user is
lowercase or not*/

#include<stdio.h>
    int main()
    {
      char ch;
      printf("Enter the character:");
      scanf("%c", &ch);
      if(ch>='a' && ch<='z')
      {
        printf("The character entered is a lowercase character.\n");
      }
      else if(ch>='A' && ch<='Z')
      {
        printf("The character entered is not a lowercase character.\n");
      }
      else
      {
        printf("The input is invalid.\n");
      }

        return 0;
    }