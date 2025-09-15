/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
#include<stdio.h>
    int main()
        {
        float marks1,marks2,marks3,total,percentage; //Here a,b and c are the scores in three subjects respectively.
        printf("Enter the marks obtained in the first subject:\n");
        scanf("%f", &marks1);
        printf("Enter the marks obtained in the second subject:\n");
        scanf("%f", &marks2);
        printf("Enter the marks obtained in the third subject:\n");
        scanf("%f", &marks3);
        printf("The marks are %.2f, %.2f and %.2f\n", marks1, marks2, marks3);
        if((marks1>100 || marks1<0)||
           (marks2>100 || marks2<0)||
           (marks3>100 || marks3<0))
        {
            printf("The marks entered are invalid\n");
        }
        else if (marks1<33 || marks2<33 || marks3<33)
        {
            printf("You are failed in one or more individual subjects.\n");
        }
        else
        {
          total = marks1+marks2+marks3;
          percentage = (total/300)*100;
          if(percentage<40)
          {
            printf("You are failed in overall marking.\n");
            printf("Your percentage is %.2f:", percentage);
          }
          else
          {
           printf("Congratulations! You are passed.");
           printf("Your percentage is %.2f", percentage);
          }

        }
        return 0;
        }